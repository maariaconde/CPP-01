
#include <iostream>
#include <fstream>
#include <string>

std::string replaceAll(const std::string& line, const std::string& s1, const std::string& s2)
{
	if (s1.empty())
		return (line);
	std::string result;
	size_t pos = 0;
	size_t found = line.find(s1, pos);
	while (found != std::string::npos)
	{
		result.append(line.substr(pos, found - pos));
		result.append(s2);
		pos = found + s1.length();
		found = line.find(s1, pos);
	}
	result.append(line.substr(pos));
	return (result);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: could not open input file '" << filename << "'" << std::endl;
		return (1);
	}
	std::ofstream outputFile((filename + ".replace").c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: could not create output file '" << filename << ".replace'" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(inputFile, line))
	{
		outputFile << replaceAll(line, s1, s2);
		if (!inputFile.eof())
			outputFile << "\n";
	}
	inputFile.close();
	outputFile.close();
	return (0);
}