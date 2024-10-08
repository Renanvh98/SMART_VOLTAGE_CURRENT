

#ifndef MAIN_TASKS_COMMON_H_
#define MAIN_TASKS_COMMON_H_

#define WIFI_APP_TASK_STACK_SIZE 4096
#define WIFI_APP_TASK_PRIORITY 5
#define WIFI_APP_TASK_CORE_ID 0

#define HTTP_SERVER_TASK_STACK_SIZE 8192
#define HTTP_SERVER_TASK_PRIORITY 4
#define HTTP_SERVER_TASK_CORE_ID 0

#define HTTP_SERVER_MONITOR_STACK_SIZE 4096
#define HTTP_SERVER_MONITOR_PRIORITY 3
#define HTTP_SERVER_MONITOR_CORE_ID 0

#define DTH22_TASK_STACK_SIZE 4096
#define DTH22_TASK_PRIORITY 3
#define DTH22_TASK_CORE_ID 1

// SNTP Time Sync task
#define SNTP_TIME_SYNC_TASK_STACK_SIZE 4096
#define SNTP_TIME_SYNC_TASK_PRIORITY 4
#define SNTP_TIME_SYNC_TASK_CORE_ID 1

// AWS IoT Task
#define AWS_IOT_TASK_STACK_SIZE 9216
#define AWS_IOT_TASK_PRIORITY 6
#define AWS_IOT_TASK_CORE_ID 1

#endif /* MAIN_TASKS_COMMON_H_ */
