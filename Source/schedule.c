#include "schedule.h"

/*
 * 
 * TODO 
 */


/* ������ ������������� ����������� */
#ifdef SIMPLE_SCHEDULER

/* ����� ����� */
#define MAX_TASK 8

/* ��������� ����������� ������*/
struct task {
		unsigned char id;
		unsigned char priority;
		unsigned char activ;
		unsigned int *func;
}

/* ������ ����� */
struct task task_list[MAX_TASK];



#endif


