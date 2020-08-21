/*
 * CMisc.h
 *
 *  Created on: 9-lug-2009
 *      Author: Arge
 */

#ifndef CMISC_H_
#define CMISC_H_

//#include <string.h>
#include <time.h>
#include "library/CString.h"

class CMisc {
public:
	CMisc();
	virtual ~CMisc();

	static void formatDate (char *inputFormat, char *outputFormat, char *sourceDate, char *destDate);
	static void formatDate1 (const char *sourceDate, char *destDate);
	static void formatDate2 (const char *sourceDate, char *destDate);
	static void formatDate3(struct tm * timeinfo, char *destDate);
	static void formatDate4(struct tm * timeinfo, char *destDate);
	static bool IsEmpty(char *ptr);
	static bool isDate(char *stringPtr);
	static bool isDate(char *stringPtr, int len);

	static void gestisciTrattiniNumStandardIsbn(CString *numeroStdIn, CString *numeroStdOut);

};

#endif /* CMISC_H_ */
