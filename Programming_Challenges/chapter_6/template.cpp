#include <iostream>
#include <fstream>
#include <string>


void multiFilesFormat(std::ofstream &outputFile, std::string fileName);


int main()
{
	int startNumber,
		endNumber;
	
	do
	{
		std::cout << "Enter start number of file or -1 to quit: ";
		std::cin >> startNumber;
	
		std::cout << "Enter end number of file or -1 to quit: ";
		std::cin >> endNumber;
		
		if (startNumber == -1 || endNumber == -1)
		{
			std::cout << "Script canceled." << std::endl;
			break;
		}

	} while (startNumber < 0 || endNumber < 0);
		
	if (startNumber != -1 || endNumber != -1)
	{
		std::ofstream outputTemplateFile;
		std::string fileName;
	
		for (int i = startNumber; i <= endNumber; i++)
		{
			fileName = "question" + std::to_string(i) + ".cpp";
	
			outputTemplateFile.open(fileName);

			if (outputTemplateFile)
			{
				std::cout << "\nFile created successfully and opened!" << std::endl;
				multiFilesFormat(outputTemplateFile, fileName);
				std::cout << "File created for " << fileName << std::endl;
				
				outputTemplateFile.close();
			}
			else
			{
				std::cout << "File could not be created and opend." << std::endl;
			}

		}
	}
		
	return 0;

}

void multiFilesFormat(std::ofstream &outputFile, std::string fileName)
{
	// File header comment
	outputFile << "/*\n"
	<< "********************************************************************************\n"
	<< "* File: 			" << fileName << "\n"
	<< "* Author: 			Nishan Subba\n"
	<< "* GitHub: 			nisSubba2024\n"
	<< "* Create Data: 		Jan 3, 2025\n"
	<< "*\n"
	<< "* Description: 		Solution to chapter 5 programming challenges, " << fileName << "\n"
	<< "********************************************************************************\n"
	<< "*/\n"
	<< "\n" << std::endl;
		
	// header file
	outputFile << "#include <iostream>\n"
	<< "#include <string>\n"
	<< "#include <fstream>\n\n\n" << std::endl;
		
	// main function
	outputFile << "int main()\n"
	<< "{\n\n\n"
	<< "\treturn 0;\n"
	<< "}";

}