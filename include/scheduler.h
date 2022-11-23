#ifndef _SCHEDULER_H_
#define _SCHEDULER_H_
#include <inttypes.h>

#define READY (0x00)
#define RUNNING (0x01)
#define STOPPED (0x02)
#define ERROR (0x03)
#define MAX_TASKS (10)

// TIMES
#define INTERVAL_POLL_TEMP_100MS 600
#define INTERVAL_PRINT_PAGE_100MS 1
#define INTERVAL_BUTTON_CHECK_100MS 1
#define INTERVAL_MANAGE_ACTUATORS_100MS 50
#define INTERVAL_REGISTER_TEMP_100MS 100
#define INTERVAL_FETCH_COMMAND 30
#define INTERVAL_PARSE_COMMAND 20
#define INTERVAL_EXECUTE_COMMAND 10

/**
 * @brief points to a task function
 *
 */
typedef void (*task_t)(void);

/**
 * @brief Task struct
 *
 */
typedef struct _tcb_t
{
    uint8_t id;  // task ID
    task_t task; // pointer to the task
    // delay before execution
    uint16_t delay, period;
    uint8_t status; // status of task
} tcb_t;

/**
 * @brief Initializes the tasks in task_list and sets up timer
 *
 */
void initScheduler(void);

/**
 * @brief Add a new task at the first empty place
 *
 * @param id
 * @param task
 * @param period
 */
void addTask(uint8_t, task_t, uint16_t);

/**
 * @brief Remove a task from tasklist by ID. stopped=ignore
 *
 * @param id
 */
void deleteTask(uint8_t);

/**
 * @brief Get the status of a task
 *
 * @param id
 * @return uint8_t
 */
uint8_t getTaskStatus(uint8_t);

/**
 * @brief Dispatch a task when it is ready
 *
 */
void dispatchTasks(void);

/**
 * @brief Decreases the delay of tasks at every tick.
 *
 */
void tickTasks(void);

#endif