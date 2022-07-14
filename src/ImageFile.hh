#ifndef __IMAGEFILE__HH__
#define __IMAGEFILE__HH__

#include <fstream> // fstream class
#include <string> // string class

class ImageFile {
public:
  ImageFile(std::string);
  ~ImageFile();

  std::string getFilename();
protected:
  std::fstream m_file;
  std::string m_filename;

  virtual bool verifyFileType() = 0;
};


#endif //__IMAGEFILE__HH__
