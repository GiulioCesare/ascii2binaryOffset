/*
 * Error.cpp
 *
 *  Created on: 4-mar-2009
 *      Author: Arge
 */
//#include <stdlib.h>
//#include <errno.h>
#include <stdio.h>

#include "GenericError.h"
#include <stdarg.h>
#include <string.h>

GenericError::GenericError () {
}

GenericError::GenericError (const char* msg) {
	strcpy (errorMessage, msg);
}


GenericError::GenericError (const char* module, int line, int code, bool exitOnError, const char * msgFmt, ...) {
	va_list argptr;
	char loc_buf[256];

	this->exitOnError = exitOnError;

	// Expand message with supplied arguments (if there are any)
	va_start(argptr, msgFmt);
	vsprintf(loc_buf, msgFmt, argptr);
	va_end(argptr);
	init (module, line, code, loc_buf);
}

void GenericError::init (const char* module, int line, int code, const char* msg) {

	sprintf(errorMessage, "\nError: Module=%s Line=%d Code=%d Msg: %s", module, line, code, msg);

}



GenericError::~GenericError() {
}
