/****************************************************************************
* Module  : LibraryConst.h                                                  *
* Author  : Argentino Trombin                                               *
* Desc.   :                                                                 *
* Date    :                                                                 *
****************************************************************************/
#ifndef __LIBRARY_CONST_H
#define __LIBRARY_CONST_H

#include "library/Compiler.h"
#include "library/Generic.h"

#include "ors/types.h"
#include <assert.h>



// Forward class declarations
class CCollectable;

// AL prefix = ArgeLib



const OrsUInt ALDEFAULT_COLLECTION_CAPACITY = 16;	// Default collection class capacity
const OrsUInt ALDEFAULT_COLLECTION_RESIZE   = 16;	// Default collection class resize step



// Pointer to function to test an object.
// Returns TRUE on a match or FALSE otherwise.
typedef OrsBool  (*GenericTestFunction)	 (void*, void*); // const const
typedef OrsBool  (*StorableTestFunction) (CCollectable*, void*); // const const

// Pointer to functions to apply operation to objects:
typedef void (*CApplyGeneric)( void*, void*);
typedef void (*CApplyStorable)(CCollectable*, void*);


typedef CCollectable*  CCollectableP;
typedef CCollectable*  (*CUserCreatorFunction)();




typedef OrsInt	ClassID;	/* Class ID tag. */
//typedef unsigned char	RWByte;		/* Bitflag atomics. */
//typedef int		fileDescTy;	/* Type of file descriptors */
//typedef unsigned short	RWErrNo;	/* Error number */



// Pre and post conditions asserts (test)
#  define ALPRECONDITION(a)		assert(a) /* Check pre- and post-conditions */
#  define ALPOSTCONDITION(a)	assert(a)


#  define ALBOUNDS_CHECK 1







#endif // __LIBRARY_CONST_H

