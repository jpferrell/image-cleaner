#ifndef __TIFFFILE__HH__
#define __TIFFFILE__HH__

#include "ImageFile.hh"

#include <iostream>

class TiffFile : public ImageFile {
public:
  TiffFile(std::string);
  ~TiffFile();
private:
  bool verifyFileType();
  
  bool m_isMSB;
};

#endif //__TIFFFILE__HH__
