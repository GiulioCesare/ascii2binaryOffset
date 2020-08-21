/****************************************************************************
* Module  : CINI.H                                                        *
* Author  : Argentino Trombin                                               *
* Desc.   :                       *
* Date    :                                                                 *
****************************************************************************/

#ifndef __CINI_H__
#define __CINI_H__

#include "library/CString.h"
#include "library/tvvector.h"


class  cIni
	{
	void init(void);

	// Public Interface
	// Data members
	public:
//	OrsChar IniField[OrsMAX_INI_PARAM][OrsMAX_EXPRESS_LEN+1];
			// far Array to contain fields of a .INI file command lin
	ATTValVector<CString*> *fieldsVector;

	OrsInt  IniFields;
			// Number of fields found in string from .in ifile



	// Methods
	cIni(void);   // Constructor

	~cIni(void);   		// Destructor


	OrsBool Setup(void);  	// Initializer

	OrsBool SplitIniFields(OrsChar *ptr);
		// Decompose a string in n tokens


	static OrsBool EmptyLine (const OrsChar *ptr);
		// Test for an empty string

	}; // End

#endif //__CINI_H__

