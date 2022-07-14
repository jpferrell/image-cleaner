#include <iostream>
#include <algorithm>

#include "ArgParser.hh"
#include "FileOps.hh"
#include "TiffFile.hh"

using namespace Utilities;

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
  for (unsigned int i = 0; i < fileArgs.size(); i++) {
    std::string extension = FileOps::getFilenameExtension(fileArgs.at(i));
    std::cout << "File has extension: " << extension << "\n";
    if (extension == "tiff") {
      TiffFile tiffFile(fileArgs.at(i));
      
    }
  }

  return 0;
}

void printHelpStatement()
{
  std::cout << "Usage: ./imageCleaner.exe -f <input files> []\n";
}
