#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_
#include <inttypes.h>

#define READY (0x00)
#define RUNNING  (0x01)
#define STOPPED  (0x02)
#define ERROR    (0x03)
#define MAX_TASKS (10)

//TIMES
#define INTERVAL_POLL_TEMP_MS 60000
#define INTERVAL_PRINT_PAGE_MS 100


/**
 * @brief points to a task function
 * 
 */
typedef void (*task_t)(void);

typedef struct _tcb_t
{
    uint8_t id; // task ID
    task_t task; // pointer to the task
    // delay before execution
    uint16_t delay, period;
    uint8_t status; // status of task
} tcb_t;


// scheduler functions
void initScheduler(void);
void addTask(uint8_t, task_t, uint16_t);
void deleteTask(uint8_t);
uint8_t getTaskStatus(uint8_t);
void dispatchTasks(void);
void tickTasks(void);

#endif