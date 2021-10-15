#ifndef MAINWINDOWAPPLICATION_HH
#define MAINWINDOWAPPLICATION_HH

#include "scene.hh"

class MainWindowApplication
{
private:
  sf::RenderWindow WindowApllication;
  sf::Event happen;
public: 
  MainWindowApplication() : WindowApllication(), happen() {}   
  MainWindowApplication(const sf::VideoMode& VideoModeTemp, const std::string& NameMainWindowTemp); 
  void MainLoop();
  void inline setBackgroundWindow(const sf::Color& ColorTemp) {WindowApllication.clear(ColorTemp);}
  void drawCharacterOnTheSceneInMainWindow( characterGeoShape& ChGSTemp);
  void drawCharacterOnTheSceneInMainWindow( characterPhoto& ChGSTemp);
  double actualPositionMouseOX();
  double actualPositionMouseOY();
  void showActualPositionMouseSTDout();
  /*void setOnSceneInMainWindowSprite(characterPhoto& ChPhTemp, scene& sceneTemp);
  void setOnSceneInMainWindowSprite(characterGeoShape& ChGSTemp, scene& sceneTemp);*/
};

#endif