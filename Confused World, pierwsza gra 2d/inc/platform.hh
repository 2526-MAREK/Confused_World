#ifndef PLATFORM_HH
#define PLATFORM_HH

#include <SFML/Graphics.hpp>
#include <assert.h>
#include "iostream"

class platform : public sf::Sprite
{
private:
  std::string NamePicture;
  sf::Texture txt;
public:    
  platform() : txt() {NamePicture = "brak";}
  platform(const std::string& NamePictureTemp);
  inline void LoadPicturePlatform(const std::string & NamePicture) {assert(txt.loadFromFile(NamePicture));} //this sprite will be picture 
  inline sf::Texture& TakeTxtPlatform(){return txt;}
 /* inline void setOriginPlatform(int x, int y) { setOrigin(x, y);}
  inline void setPositionPlatform(int x, int y) { setPosition(x, y);}
  inline void setRotationPlatform(int angleInDegrees) { setRotation(angleInDegrees);}*/
};

#endif