/***************************************************************************
* Program : SignalError.CPP                                                       *
* Purpose : Eror handling                                                  *
* Author  : Argentino Trombin                                              *
****************************************************************************/
#include <stdio.h>
#include <stdarg.h>
#include <ors/Const.h>
#ifdef TRACK_MEMORY_LEAKS
    #include "nvwa/debug_new.h"
#endif

/**
*	Temporary error handler used for debugging purposes.
*	To be used only temporarily in place of CErr::SetErr
*	Used to place a breakpoint while developing.
**/
void SignalAWarning(	const OrsChar *Module,
					OrsInt Line,
					const OrsChar * MsgFmt, ...)
	{
	va_list argptr;
	OrsChar loc_buf[2048+1];

	// Expand mesasage with supplied arguments (if there are any)
	va_start(argptr, MsgFmt);
	vsprintf(loc_buf, MsgFmt, argptr);
	va_end(argptr);

	printf("\nSignalAWarning: Module=%s Line=%d Message:%s", Module, Line, loc_buf);

	} // End SignalAWarning
