/****************************************************************************
* Module  : TYPES.H                                                         *
* Author  : Argentino Trombin                                               *
* Desc.   : Object Retrieval System type definitions                        *
* Date    :                                                                 *
****************************************************************************/
#ifndef __TYPES_H__
#define __TYPES_H__

/* OLD stuff
typedef int  BOOL;
typedef char BOOLC;
typedef unsigned char 	uchar;
typedef unsigned short 	ushort;
typedef unsigned int  	uint;
typedef unsigned long  	ulong;
#ifndef ULONG
 #define  ULONG unsigned long
 #define  UINT  unsigned int
#endif
*/

typedef short 				OrsBool;  // BOOLean (short)

typedef char  				OrsBoolc; // BOOLean (char)

typedef char				OrsChar;
typedef unsigned char  		OrsUChar;

typedef char				OrsByte;
typedef unsigned char  		OrsUByte;

typedef short   			OrsShort;
typedef unsigned short 		OrsUShort;

typedef short   			OrsWord;
typedef unsigned short 		OrsUWord;


//#ifdef PLATFORM_DEPENDENT_INT
	typedef int     		OrsInt;  // 16 or 32 bit platform dependent
	typedef unsigned int   	OrsUInt;
	typedef unsigned        OrsUnsigned;
//#else
//	typedef short   		OrsInt;  // 16 bit int. Platform independent
//	typedef unsigned short 	OrsUInt;
//	typedef unsigned short  OrsUnsigned;
//#endif PLATFORM_DEPENDENT_INT

typedef long    			OrsLong;
typedef unsigned long  		OrsULong;

typedef long    			OrsDoubleWord;
typedef unsigned long  		OrsUDoubleWord;


#endif //__TYPES_H__




