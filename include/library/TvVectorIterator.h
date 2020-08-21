#ifndef __CATTVALVECTORITERATOR_H__
#define __CATTVALVECTORITERATOR_H__

#include "library/TvVector.h"

template <class T> class CAttValVectorIterator
	{
//	T*			_array;
	ATTValVector <T> *VectorPtr;
	OrsInt CurEntry;
public:
//	CAttValVectorIterator(T aValue);
	CAttValVectorIterator(ATTValVector <T> *aVectorPtr);
	~CAttValVectorIterator() {}
	//char * operator() ();
	T  operator() ();
	void Reset()
		{CurEntry = -1;}
	};


template<class T> CAttValVectorIterator<T>::CAttValVectorIterator(ATTValVector <T> *aVectorPtr)
	{
	VectorPtr = aVectorPtr;
	CurEntry = -1;
	}

template<class T> T CAttValVectorIterator<T>::operator() ()
	{
	CurEntry++;

	if	(CurEntry < VectorPtr->Length())
		return (*VectorPtr)[CurEntry];

	CurEntry--;
	return OrsNULL;
	}

#endif __CATTVALVECTORITERATOR_H__

