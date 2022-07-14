#include "TiffFile.hh"

TiffFile::TiffFile(std::string filename) : ImageFile(filename)
{
  bool isFileType =  verifyFileType();
  if (isFileType) {
    std::cout << "Is a TIFF file!\n";
  }
}

TiffFile::~TiffFile()
{
}

bool TiffFile::verifyFileType()
{
  // Ensure input position indicator is to the beginning of the file
  //m_file.seekg(std::beg);
  
  return true;
}
