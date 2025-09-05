// File: FileProcessor.h
// Author:Kayode Binitie
// Student ID: 2461327
// Email: binitie@chapman.edu
// Class: CPSC 350: Data Structures and Algorithms FA25 Section 02
// Assignment: Programming Assignment 1: Robber Language Translation

// Description:
// This file contans the declarations of the FileProcessor class which
// produces a HTML file from an input file provided in 'main'.

#ifndef FILEPROCESSOR_H
#define FILEPROCESSOR_H
#include <fstream>
#include <string>
#include <iostream>

/*
   Class: FileProcessor
   Description: File handling for translation
   Parameters: None
   Exceptions: None
 */
class FileProcessor
{
	public:
	FileProcessor();
	virtual ~FileProcessor();
	void processFile(const std::string input, std::string output);
};

#endif // FILEPROCESSOR_H
