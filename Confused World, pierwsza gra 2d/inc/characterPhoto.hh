#ifndef CHARACTERPHOTO_HH
#define CHARACTERPHOTO_HH

#include <SFML/Graphics.hpp>
#include<assert.h>
#include "iostream"

class characterPhoto : public sf::Sprite
{
private:
  std::string NamePicture;
  sf::Texture txt;
public:   
  characterPhoto() : txt() {NamePicture = "brak";}
  characterPhoto(const std::string& NamePictureTemp);
  inline void LoadPictureCharacter() {assert(txt.loadFromFile(NamePicture));} //this sprite will be picture 
  inline sf::Texture& TakeTxtCharacterPhoto(){return txt;} 
  /*inline void setOriginCharacter(int x, int y) { setOrigin(x, y);}
  inline void setPositionCharacter(int x, int y) { setPosition(x, y);}
  inline void setRotationCharacter(int angleInDegrees) { setRotation(angleInDegrees);}*/
};

#endif