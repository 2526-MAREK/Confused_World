#ifndef CHARACTERGEOSHAPE_HH
#define CHARACTERGEOSHAPE_HH

#include <SFML/Graphics.hpp>
#include<assert.h>
#include "iostream"
#define CONST_TWO_POINT 2
#define SIZE_OF_HEAD 20
#define LENGHT_OF_BODY 60
#define WIDTH_OF_BODY 1

class characterGeoShape : public sf::Sprite
{
private:
  sf::CircleShape Head;
  sf::RectangleShape Body;
  sf::Vertex rightHand[CONST_TWO_POINT];
  sf::Vertex leftHand[CONST_TWO_POINT];
  sf::Vertex rightLeg[CONST_TWO_POINT];
  sf::Vertex leftLeg[CONST_TWO_POINT];
public:   
  characterGeoShape() : Head(), Body(), rightHand() {}
  characterGeoShape(int beginPositonOX, int beginPositonOY);//, ); /*int sizeOfHead, int lenghtOfBody*/
  inline sf::CircleShape& TakeHead() { return Head;}
  inline sf::RectangleShape& TakeBody() {return Body;}
  inline sf::Vertex* TakeRightHand() {return rightHand;}
  inline sf::Vertex* TakeLeftHand() {return leftHand;}
  inline sf::Vertex* TakeRightLeg() {return rightLeg;}
  inline sf::Vertex* TakeLeftLeg() {return leftLeg;}
  /*inline void setOriginCharacter(int x, int y) { setOrigin(x, y);}
  inline void setPositionCharacter(int x, int y) { setPosition(x, y);}
  inline void setRotationCharacter(int angleInDegrees) { setRotation(angleInDegrees);}*/
};

#endif