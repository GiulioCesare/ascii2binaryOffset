//============================================================================
// Name        : ascii2binaryOffset.cpp
// Author      : Argentino Trombin
// Version     :
// Copyright   : ArgeCopyRight
// Description : Hello World in C++, Ansi-style
//============================================================================

//#include <iostream>
//using namespace std;

#include <iostream>
#include <stdlib.h>     /* atoi */
using namespace std;

#include <vector>

#include "library/CFile.h"
#include "library/CString.h"
#include "library/GenericError.h"

void convertAsciiOffsets(const char* argv[]);
void printBinaryOffsetFile(const char* argv[]);

#define ADDRESS_LONG	1
#define ADDRESS_LONGLONG	2

int addressType;
int keyLength;


void printBinaryOffsetFile(const char* argv[])
{
	char *filenameIn = (char *)argv[2];
	FILE* fileIn;

	keyLength = atoi(argv[3]);

	if (!strcmp( (char *)argv[4], "long"))
		addressType = ADDRESS_LONG;
	else if (!strcmp( (char *)argv[4], "longlong"))
		addressType = ADDRESS_LONGLONG;
	else
	{
		printf ("addressType deve essere 'long' o 'longlong'\n");
		exit (1);
	}

	fileIn = fopen(filenameIn, "rb");

	char key[20];

	key[keyLength] = 0; // EOS

	while (fread(key, keyLength, 1, fileIn))
	{

		printf ("\nkey=%s", key);

		if (addressType == ADDRESS_LONG) // 4 bytes type
		{
		#if __x86_64__
		/* 64-bit */
			int i;
			fread (&i, sizeof(i), 1, fileIn);
			printf (" long offset=%d", i);
		#else
		// 32 bit
			long l;
			fread (&l, sizeof(l), 1, fileIn);
			printf (" long offset=%ld", l);
		#endif


		}
		else
		{	// 8 byte type
			long long ll;
			fread (&ll, sizeof(ll), 1, fileIn);
			printf (" long long offset=%lld", ll);
		}

	} // end while


	CString s;
	long ctr = 0;


	fclose(fileIn);

} // End printBinaryOffsetFile


void convertAsciiOffsets(const char* argv[])
{
	char *filenameIn = (char *)argv[1];
	char *filenameOut = (char *)argv[2];
	FILE*		fileOut;

	keyLength = atoi(argv[3]);

	if (!strcmp( (char *)argv[4], "long"))
		addressType = ADDRESS_LONG;
	else if (!strcmp( (char *)argv[4], "longlong"))
		addressType = ADDRESS_LONGLONG;
	else
	{
		printf ("addressType deve essere 'long' o 'longlong'\n");
		exit (1);
	}
	CFile *cFileIn = new CFile(filenameIn);
//	CFile *cFileOut = new CFile(filenameOut, AL_WRITE_FILE);
	fileOut = fopen(filenameOut, "wb");


	CString s;
	long ctr = 0;

	while(!cFileIn->Eof())
	{
		try{
			s.ReadLine(cFileIn);
//			printf ("Key=%s, address=%s\n", s.SubstringData(0,keyLength), s.data()+keyLength);
			if (s.Length() < keyLength)
				continue;

			if (addressType == ADDRESS_LONG)
			{
			#if __x86_64__
			/* 64-bit */
				int i = atoi(s.data()+keyLength);
			//				printf ("Key=%s, address=%ld\n", s.SubstringData(0,keyLength), l);
				fwrite(s.SubstringData(0, keyLength), keyLength, 1, fileOut);
				fwrite(&i, sizeof(i), 1, fileOut);
			#else
			// 32 bit

				long l = atol(s.data()+keyLength);
			//				printf ("Key=%s, address=%ld\n", s.SubstringData(0,keyLength), l);
				fwrite(s.SubstringData(0, keyLength), keyLength, 1, fileOut);
				fwrite(&l, sizeof(l), 1, fileOut);
			#endif




			}
			else
			{ // ADDRESS_LONGLONG

				long long ll = atoll(s.data()+keyLength);
//				printf ("\nKey=%s, address=%lld", s.SubstringData(0,keyLength), ll);
				fwrite(s.SubstringData(0, keyLength), keyLength, 1, fileOut);
				fwrite(&ll, sizeof(ll), 1, fileOut);

			}


		//cFile->ReadLine(buf, sizeof(buf));

		} catch (GenericError e) {
			std::cout << e.errorMessage;
		}

		ctr++;
	}

	fclose(fileOut);
	delete cFileIn;
//	delete cFileOut;

} // End convertAsciiOffsets

int main(int argc, const char* argv[]) {
//	cout << "Ascii to binary offset" << endl; // prints Ascii to binary offset


	setvbuf(stdout, NULL, _IONBF, 0);

//	printf ("\nsizeof int = %d", sizeof(int));
//	printf ("\nsizeof long = %d", sizeof(long));
//	printf ("\nsizeof long long = %d", sizeof(long long));

	if (argc != 5)
	{
		printf ("\nUSO: ascii2binaryOffset filenameOffset_In filenameOffset_Out keyLength addressType (long | longlong)\n");
		exit (1);
	}


	printf ("ascii2binaryOffset - (c)Copyright Iccu 2009-2015 (autore Argentino Trombin) - Open source - " );

//	printf ("Versione 1.1.1 29/01/2015\n");
//	printf ("Versione 1.2.1 03/02/2015\n");
	printf ("Versione 1.2.2 06/02/2015\n"); // corretto la stampa degli argomenti
	printf ("\tArgomenti: %s %s %s %s\n", argv[1], argv[2], argv[3], argv[4]);

	convertAsciiOffsets(argv);



	// Rileggiamo da binary file per verifica
	//	printBinaryOffsetFile(argv);

	return 0;
} // End main


