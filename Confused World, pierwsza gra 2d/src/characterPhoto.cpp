#include "characterPhoto.hh"

characterPhoto::characterPhoto(const std::string& NamePictureTemp) : NamePicture(NamePictureTemp), txt()
{
     assert(txt.loadFromFile(NamePicture)); 
}     
