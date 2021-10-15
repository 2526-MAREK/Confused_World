#ifndef SCENE_HH
#define SCENE_HH

#include "characterPhoto.hh"
#include "characterGeoShape.hh"
#include "platform.hh"
#include <list>

#define COORDINATES_OF_BEGIN_GAME_OX 100
#define COORDINATES_OF_BEGIN_GAME_OY 713

class scene
{
private:
  std::list<characterGeoShape> LstChGS; 
  std::list<characterPhoto> LstChPh;
  std::list<platform> LstPt; 
public:
  scene() : LstChGS(), LstChPh() , LstPt() {}
  scene(const characterGeoShape& ChGSTemp, const characterPhoto& ChPhTemp);
  scene(const characterGeoShape& ChGSTemp);
  scene(const characterPhoto& ChPhTemp);
  inline characterGeoShape& TakeLastAddCharacterGeoShape() {assert(!LstChGS.empty()); return LstChGS.back();}
  inline characterPhoto& TakeLastAddCharacterPhoto() {assert(!LstChPh.empty()); return LstChPh.back();}
  //inline character& TakeTedCh(){return TedCh;}
  inline void PrintOnScene(characterPhoto& ChPh ){ChPh.setTexture(ChPh.TakeTxtCharacterPhoto());}
  //inline void PrintOnScene(characterGeoShape& ChGS ){ChPh.setTexture(ChPh.TakeTxtCharacter());}
  inline void PrintOnScene(platform& Pt ){Pt.setTexture(Pt.TakeTxtPlatform());}
  void setSpriteOnTheScene(characterPhoto& ChPhTemp);
  void setSpriteOnTheScene(characterGeoShape& ChGSTemp);
  //inline void LoadPictureTedCh(const std::string & NamePicture){TedCh.LoadPictureCharacter(NamePicture);}
 // inline void setOriginTedCh(int x,int y) {TedCh.setOrigin(x, y);}
};

#endif