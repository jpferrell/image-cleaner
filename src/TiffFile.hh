#ifndef __TIFFFILE__HH__
#define __TIFFFILE__HH__

#include "ImageFile.hh"

class TiffFile : public ImageFile {
public:
  TiffFile(std::string);
  ~TiffFile();
private:
  std::string _filename;
};

#endif //__TIFFFILE__HH__
