#include "MainWindowApplication.hh"

MainWindowApplication::MainWindowApplication(const sf::VideoMode& VideoModeTemp, const std::string& NameMainWindowTemp) :
 WindowApllication(VideoModeTemp, NameMainWindowTemp) , happen()
{

}

void MainWindowApplication::MainLoop()
{
    characterGeoShape Ted1(COORDINATES_OF_BEGIN_GAME_OX, COORDINATES_OF_BEGIN_GAME_OY);
    characterPhoto Ted2("pngegg.png");
    scene sc (Ted1, Ted2);
    
    sc.PrintOnScene(sc.TakeLastAddCharacterPhoto());

    while(WindowApllication.isOpen()) //main loop program
    {
        while(WindowApllication.pollEvent(happen))
        {
            showActualPositionMouseSTDout();
            if((happen.type == sf::Event::Closed) || (happen.type == sf::Event::KeyPressed && happen.key.code == sf::Keyboard::Escape))
                WindowApllication.close();
        }

        setBackgroundWindow(sf::Color::Black);
        sc.setSpriteOnTheScene(sc.TakeLastAddCharacterPhoto());
        WindowApllication.draw(sc.TakeLastAddCharacterPhoto());

        drawCharacterOnTheSceneInMainWindow(sc.TakeLastAddCharacterGeoShape());
        sc.setSpriteOnTheScene(sc.TakeLastAddCharacterGeoShape());
        
        WindowApllication.display();
    }        
}

/*void MainWindowApplication::setOnSceneInMainWindowSprite(characterGeoShape& ChGSTemp, scene& sceneTemp)
{

}*/

void MainWindowApplication::drawCharacterOnTheSceneInMainWindow(characterGeoShape& ChGSTemp)
{
        WindowApllication.draw(ChGSTemp.TakeHead());
        WindowApllication.draw(ChGSTemp.TakeBody());

        WindowApllication.draw(ChGSTemp.TakeRightHand(), 2, sf::Lines);
        WindowApllication.draw(ChGSTemp.TakeLeftHand(), 2 , sf::Lines);
        WindowApllication.draw(ChGSTemp.TakeLeftLeg(), 2 , sf::Lines);
        WindowApllication.draw(ChGSTemp.TakeRightLeg(), 2 , sf::Lines);
}

void MainWindowApplication::showActualPositionMouseSTDout()
{
    std::cout<<"OX: "<<actualPositionMouseOX()<< " OY: "<<actualPositionMouseOY()<<std::endl;
}

double MainWindowApplication::actualPositionMouseOX()
{
    return happen.mouseMove.x;
}

double MainWindowApplication::actualPositionMouseOY()
{
    return happen.mouseMove.y;
}