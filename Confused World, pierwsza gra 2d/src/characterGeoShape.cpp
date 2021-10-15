#include "characterGeoShape.hh"

characterGeoShape::characterGeoShape(int beginPositonOX, int beginPositonOY) :// , ) : /*int sizeOfHead,
//int lenghtOfBody
Head(SIZE_OF_HEAD), Body(sf::Vector2f(WIDTH_OF_BODY, LENGHT_OF_BODY)) // if you change lenght_of_body or 
//Size_OF_Head you must to introduce change in scale of full body because im not doing body scaling yet
{
     //assert(txt.loadFromFile(NamePicture)); 
     //Head.setPosition(400, 50);
     Head.setPosition(beginPositonOX, beginPositonOY);
     Head.setFillColor(sf::Color::Black);
     Head.setOutlineColor(sf::Color::White);
     Head.setOutlineThickness(1);

     //Body.setPosition(420, 90);
     Body.setPosition(beginPositonOX + 20, beginPositonOY + 40);
     Body.setFillColor(sf::Color::White);
     
     /*rightHand[0] ={sf::Vertex(sf::Vector2f(420,110))};
     rightHand[1] = {sf::Vertex(sf::Vector2f(440,130)) };
     leftHand[0] = { sf::Vertex(sf::Vector2f(420,110)) };
     leftHand[1] = {sf::Vertex(sf::Vector2f(400,130))};
     rightLeg[0] = { sf::Vertex(sf::Vector2f(420,150))};
     rightLeg[1] = {sf::Vertex(sf::Vector2f(440,200))};
     leftLeg[0] ={sf::Vertex(sf::Vector2f(420,150))};
     leftLeg[1] = {sf::Vertex(sf::Vector2f(400,200))};*/

     rightHand[0] ={sf::Vertex(sf::Vector2f(beginPositonOX+20, beginPositonOY+60))};
     rightHand[1] = {sf::Vertex(sf::Vector2f(beginPositonOX+40, beginPositonOY+80)) };
     leftHand[0] = { sf::Vertex(sf::Vector2f(beginPositonOX+20, beginPositonOY+60)) };
     leftHand[1] = {sf::Vertex(sf::Vector2f(beginPositonOX, beginPositonOY+80))};
     rightLeg[0] = { sf::Vertex(sf::Vector2f(beginPositonOX+20, beginPositonOY+100))};
     rightLeg[1] = {sf::Vertex(sf::Vector2f(beginPositonOX+40, beginPositonOY+150))};
     leftLeg[0] ={sf::Vertex(sf::Vector2f(beginPositonOX+20, beginPositonOY+100))};
     leftLeg[1] = {sf::Vertex(sf::Vector2f(beginPositonOX, beginPositonOY+150))};
}

