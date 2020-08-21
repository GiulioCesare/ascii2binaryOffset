/*
 * Error.h
 *
 *  Created on: 4-mar-2009
 *      Author: Arge
 */

#ifndef GENERICERROR_H_
#define GENERICERROR_H_

#ifdef TRACK_MEMORY_LEAKS
    #include "nvwa/debug_new.h"
#endif


#define	IO_GENERICERROR_CODE			1
#define MEMORY_GENERICERROR_CODE		2

#define	EXIT_ON_GENERICERROR_TRUE	1
#define	EXIT_ON_GENERICERROR_FALSE	0

class GenericError {
	  void init (const char* module, int line, int code, const char* msg);
public:
	char*	errorModule;		// Source module name where the error occured
	int  	errorLine;			// Source module line number where the error occured
	int  	errorCode;			// Error code
	bool	exitOnError;		// If OrsTRUE exit from program anyhow
	char	errorMessage[512];		// Message

  GenericError ();
  GenericError (const char* module, int line, int code, bool exitOnError, const char * msgFmt, ...);
  GenericError (const char* msg);
  virtual ~GenericError();

};

#endif /* GENERICERROR_H_ */
