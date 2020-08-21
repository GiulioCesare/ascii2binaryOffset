/****************************************************************************
* Module  : Compiler.h                                                      *
* Author  : Argentino Trombin                                               *
* Desc.   : Compiler and system related directives                          *
*                                                                           *
* Date    :                                                                 *
****************************************************************************/
#ifndef COMPILER_H
#define COMPILER_H


/**
*	Most (but not all) non-unix systems convert new line to carriage
*	return / line feed on output:
**/
#if !defined(unix)
#  define CRLF_CONVENTION 1
#endif


#endif //COMPILER_H

