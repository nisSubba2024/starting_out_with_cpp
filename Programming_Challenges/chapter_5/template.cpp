#include <iostream>
#include <fstream>

int main()
{
	std::ofstream templateFile;
	std::string fileName = "testing1.cpp";
	
//	std::cout << "Enter a file name: ";
//	std::cin >> fileName;
	
	templateFile.open(fileName);
	
	if (templateFile)
	{
		std::cout << "File opened successfully." << std::endl;
		templateFile << "#include <iostream>" << std::endl;
		templateFile << "#include <string>\n" << std::endl;
		
		// int main method
		templateFile << "int main ()\n"
					<< "{\n"
					<< "\n"
					<< "\treturn 0;\n"
					<< "}" << std::endl;
	}
	
	std::cout << "Data written to file." << std::endl;
	
	templateFile.close();
	
	return 0;
}