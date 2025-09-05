// File: FileProcessor.cpp
//
// Contributors:
//
// Author:Kayode Binitie
// Student ID: 2461327
// Email: binitie@chapman.edu
// Class: CPSC 350: Data Structures and Algorithms FA25 Section 02
// Assignment: Programming Assignment 1: Robber Language Translation

// Description:
// Contains functions for file handling for the Not So Super Marios Game

#include "FileProcessor.h"

void FileProcessor::processFile(const std::string input, std::string output)
{
	char ch;

	unsigned int params[8];       // Game parameters from input file

	std::string inputLine;
	std::string outputLine;
	std::ifstream inputFile;
	std::ofstream outputFile;


	// Confirm input is a text file
	if(input.substr(input.length() - 4, 4) != ".txt")
	{
		std::cout << "Confirm that " << input << " is a plain text file." << std::endl;
		std::cout << "Press any key to continue or Ctrl - C to exit" << std::endl;
		ch = std::cin.get();
	}

	// Confirm output is a HTML file
	if(output.substr(output.length() - 5, 5) != ".html")
	{
		std::cout  << output << " is not a HTML file." << std::endl;
		std::cout << "Appending .html to " << output << std::endl;
		std::cout << "Press any key to continue or Ctrl - C to exit" << std::endl;
		ch = std::cin.get();
		output.append(".html");
	}

	// Open checked files
	inputFile.open(input);
	outputFile.open(output);

	if (!inputFile.is_open())
	{
		std::cout << "Error opening file: " << std::endl;
		exit(2);
	}

	// Header for HTML file
	outputFile << "<!DOCTYPE html>" << std::endl;
	outputFile << "<html>" << std::endl;
	outputFile << "<head>" << std::endl;
	outputFile << "<title>Programming Assignment 2: Not So Super Mario Bros</title>" << std::endl;
	outputFile << "<meta charset=\"UTF-8\">" << std::endl;
	outputFile << "<meta name=\"description\" content=\"This standard HTML page containes a transcript"
		"of the gameplay of the Not So Super Marios Game" << std::endl;
	outputFile << "<meta name=\"Kayode Binitie, Ariel Barberena\" content=\"Not So Super Mario Bros\"" << std::endl;
	outputFile << "</head>" << std::endl;
	outputFile << "<body>" << std::endl;

	// Translate input File
	// Read only the first 8 lines for game parameters:
	for(int i  = 0; i < 8; ++i)
	{
		if(getline(inputFile, inputLine))
		{
			params[i] = static_cast<unsigned int>(std::stoul(inputLine));
		}
		outputLine = outputLine;
		outputFile << "<p><b>" << inputLine << "</b></p>" << std::endl;
		outputFile << "<p><i>" << outputLine << "</i></p>" << std::endl;
	}

	// Closing tags
	outputFile << "</body>" << std::endl;
	outputFile << "</html>" << std::endl;

	inputFile.close();
	outputFile.close();

}
