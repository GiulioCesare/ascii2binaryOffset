/****************************************************************************
* Module  : CBaseClass.h                                       *
* Author  : Argentino Trombin                                               *
* Desc.   :                                                                 *
* Date    : Abstract Base Class                                                                *
****************************************************************************/
#ifndef __CBASECLASS_H
#define __CBASECLASS_H

#include "ors/types.h"
#include "LibraryClassId.h"


class CBaseClass
	{
	public:
	CBaseClass(){};
	virtual ~CBaseClass(){};

	// This class virtual functions
	//=============================
	virtual OrsInt ClassId(){return CBaseClassID;};
			// Return the Class ID number
	virtual const OrsChar* ClassName(){return "CBaseClassID";};
			// Return the Class Name
	};


#define	ClassIDSize sizeof(OrsInt)


#endif // __CBASECLASS_H
