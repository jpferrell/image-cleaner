#include <iostream>
#include "ArgParser.hh"

void printHelpStatement();

int main(int argc, char **argv)
{
  Utilities::ArgParser argParse(argc, argv);
  
  if (!argParse.isFlagPresent("f") ||
      argParse.isFlagPresent("h") ||
      argParse.isFlagPresent("help")) {
    printHelpStatement();
    return -1;
  }

  StringVector fileArgs =  argParse.getFlagArguments("f");
  std::cout << "Number of files input: " << fileArgs.size() << "\n";

  return 0;
}

void printHelpStatement()
{
  std::cout << "Usage: ./imageCleaner.exe -f <input files> []\n";
}
