#ifndef FILEHANDLER_H
#define FILEHANDLER_H
#include <fstream>
#include "nlohmann/json.hpp"

class Timebank;

class FileHandler //Is used in Timebank saving/reading methods
{
private:
	std::string savingFilePath = "save/savings.json";

public:
	void writeToFile(Timebank* timebank);
	void readFromFile(Timebank* timebank);
};

#endif
