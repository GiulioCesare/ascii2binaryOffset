/****************************************************************************
* Module  : LibraryClassId.h                                                       *
* Author  : Argentino Trombin                                               *
* Desc.   : Define the IDs for the classes in library                       *
* Date    :                                                                 *
****************************************************************************/
#ifndef __LIBRARY_CLASS_ID_H
#define __LIBRARY_CLASS_ID_H

// SGML classes that use the production number as ID


// SGML classes that DO NOT use the production number as ID
//typedef enum LibraryClassId_Enum
typedef enum
	{
	CBaseClassID = 	100,
	CBTreeInMemID,
	CBTreeInMemNodeID,
	CBufferedDataID,
	CBufferedDataIteratorID,
	CCollectionID,
    CCollectableDoublyLinkedListID,
    CCollectableDoublyLinkedListIteratorID,
	CCollectableElementID,
	CCollectableTextID,

	CDoublyLinkedListID,
	CDoublyLinkedListIteratorID,

	CFactoryID,
	CHashDictionaryID,
	CHashDictionaryIteratorID,
	CHashDictionaryIteratorKeyValueID,
	CHashDictionaryKeyValueID,
	CHashTableID,
	CHashTableIteratorID,
	CInputManagerID,
	CIntID,
	CLongID,
    CCollectableIntID,
    CCollectableLongID,
	CIteratorID,
	CKeyAndValueID,
	COrderedCollectionID,
	COrderedCollectionIteratorID,
	CLinkedListID,
	CSequenceableID,
	CSetID,
	CSetIteratorID,
	CSetIdentityID,
	CSinglyLinkedListID,
    CCollectableSinglyLinkedListID,
	CSinglyLinkedListIteratorID,
    CCollectableSinglyLinkedListIteratorID,
    CCollectableAssociationID,
    CCollectableID,
    CCollectableIdAssociationID,
	CStoreEntryID,
	CStoreTableID,
	CStringID,
    CCollectableStringID,
	CSteerAttributeID,
	CSteerAttributeListID,
	CTextID,
	CTokenizerID,
	ATTStackID,
	ATTValVectorID,
	CTPointerVectorID,
	CTValueVectorID

	//	};
	}LibraryClassId_Enum;




#endif // __LIBRARY_CLASS_ID_H

