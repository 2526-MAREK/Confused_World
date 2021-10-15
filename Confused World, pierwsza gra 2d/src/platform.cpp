#include "platform.hh"

platform::platform(const std::string& NamePictureTemp) : NamePicture(NamePictureTemp), txt() { assert(txt.loadFromFile(NamePicture)); }