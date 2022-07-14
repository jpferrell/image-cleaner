#include "ImageFile.hh"

ImageFile::ImageFile(std::string filename) : m_filename{filename}
{
  m_file.open(filename, std::ios::binary);
}

ImageFile::~ImageFile()
{
  m_file.close();
}

std::string ImageFile::getFilename()
{
  return m_filename;
}

