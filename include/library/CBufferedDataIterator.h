/****************************************************************************
* Module  : CBufferedDataIterator                                           *
* Author  : Argentino Trombin                                               *
* Desc.   :                                                                 *
*                                                                           *
* Date    :                                                                 *
****************************************************************************/
#include "library/CBufferedData.h"
#include "ors/Const.h"


class CBufferedDataIterator
	{
	private:
	// Members
	CBufferedData*	BufferedDataObjectPtr;
					// The object holding the buffered data
	OrsChar *BufPtr;
					// The pointer into BufferedDataObjectPtr->Buffer
	public:

	CBufferedDataIterator(CBufferedData* aBufferedDataObjectPtr);
	CBufferedDataIterator();
	~CBufferedDataIterator();
	void	Reset();
	OrsBool	Setup(CBufferedData* aBufferedDataObjectPtr);

	OrsInt GetChar();
			// Gets the next character in buffer an moves the pointer forward
			// returns 0 on error
	OrsInt UnGetChar(OrsChar aChar);
			// Put a character back in the buffer
	OrsInt PeekChar();
			// Gets the next character in buffer without moving forward
			// returns 0 on error

	}; // End CBufferedDataIterator

