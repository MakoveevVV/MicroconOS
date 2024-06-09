#include "schedule.h"

/*
 * 
 * TODO 
 */


/* Выбран кооперативный планировщик */
#ifdef SIMPLE_SCHEDULER

/* Число задач */
#define MAX_TASK 8

/* Структура выполняемой задачи*/
struct task {
		unsigned char id;
		unsigned char priority;
		unsigned char activ;
		unsigned int *func;
}

/* Список задач */
struct task task_list[MAX_TASK];



#endif


