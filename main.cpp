#include <iostream>
#include "FileProcessor.h"

using namespace std;

int main(int argc, char *argv[])
{

	// Validate command line args:
	if(argc != 3)
	{
		std::cerr << "Incorrect argument count" << std::endl;
		std::cout << "Run ./A1.exe input.txt output.html" << std::endl;
		exit(1);
	}


	// Instantiate file processor and exit:
	FileProcessor file_process = FileProcessor();
	file_process.processFile(argv[1], argv[2]);

    return 0;
}
