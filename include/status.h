
#pragma once

//#include <stdio.h>
//#include <string.h>
//#include <errno.h>


typedef enum {
	SUCESS = 0,
	FAILURE = -1
} status_code;

typedef struct s {
	status_code code;
	char* message;
} status;
