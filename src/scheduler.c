#include <avr/io.h>
#include <inttypes.h>
#include "scheduler.h"
#include "timer.h"

tcb_t task_list[MAX_TASKS];

void tickTasks(void)
{
    for (uint8_t i = 0; i < MAX_TASKS; i++)
    {
        if (task_list[i].status == READY)
            task_list[i].delay--;
    }
}

void initScheduler(void)
{
    for (uint8_t i = 0; i < MAX_TASKS; i++)
    {
        task_list[i].id = 0;
        task_list[i].task = (task_t)0x00;
        task_list[i].delay = 0;
        task_list[i].period = 0;
        task_list[i].status = STOPPED;
    }
    initSchedulerTimer();
}

void addTask(uint8_t id, task_t task,
             uint16_t period)
{
    uint8_t idx = 0, done = 0x00;
    while (idx < MAX_TASKS)
    {
        if (task_list[idx].status == STOPPED)
        {
            task_list[idx].id = id;
            task_list[idx].task = task;
            task_list[idx].delay = period;
            task_list[idx].period = period;
            task_list[idx].status = READY;
            done = 0x01;
        }
        if (done)
            break;
        idx++;
    }
}

void deleteTask(uint8_t id)
{
    for (uint8_t i = 0; i < MAX_TASKS; i++)
    {
        if (task_list[i].id == id)
        {
            task_list[i].status = STOPPED;
            break;
        }
    }
}

uint8_t getTaskStatus(uint8_t id)
{
    for (uint8_t i = 0; i < MAX_TASKS; i++)
    {
        if (task_list[i].id == id)
            return task_list[i].status;
    }
    return ERROR;
}

void dispatchTasks(void)
{
    for (uint8_t i = 0; i < MAX_TASKS; i++)
    {
        // check for a valid task ready to run
        if (!task_list[i].delay &&
            task_list[i].status == READY)
        {
            // task is now running
            task_list[i].status = RUNNING;
            // call the task
            (*task_list[i].task)();

            // reset the delay
            task_list[i].delay =
                task_list[i].period;
            // task is runnable again
            task_list[i].status = READY;
        }
    }
}