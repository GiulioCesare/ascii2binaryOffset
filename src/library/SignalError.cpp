/***************************************************************************
* Program : SignalError.CPP                                                       *
* Purpose : Eror handling                                                  *
* Author  : Argentino Trombin                                              *
****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <ors/Const.h>
#include <errno.h>
#ifdef TRACK_MEMORY_LEAKS
    #include "nvwa/debug_new.h"
#endif

OrsInt	SignalledErrors = 0;

void ferr( char *fmt, ... );
void SignalAnError(	const OrsChar *Module, OrsInt Line, const OrsChar * MsgFmt, ...);

/**
*	Temporary error handler used for debugging purposes.
*	To be used only temporarily in place of CErr::SetErr
*	Used to place a breakpoint while developing.
**/
void SignalAnError(	const OrsChar *Module,
					OrsInt Line,
					const OrsChar * MsgFmt, ...)
	{
	va_list argptr;
	OrsChar loc_buf[512];

	// Expand message with supplied arguments (if there are any)
	va_start(argptr, MsgFmt);
	vsprintf(loc_buf, MsgFmt, argptr);
	va_end(argptr);

	printf("\nSignalAnError: Module=%s Line=%d Msg:%s", Module, Line, loc_buf);

	SignalledErrors++;

	} // End SignalAnError


//----------------------------------------------------------------------
void  ferr( char *fmt, ... )
	{
	va_list	  	args;
	va_start( args, fmt );

    vfprintf ( stderr, fmt, args );

	va_end( args );
	exit(errno);
	}
