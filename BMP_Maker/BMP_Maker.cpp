// BMP_Maker.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BMP.h"

int main()
{
	BMP testimage;
	testimage.randomImage();
	testimage.close_file();

	return 0;
}