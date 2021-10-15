#include "scene.hh"

scene::scene(const characterGeoShape& ChGSTemp, const characterPhoto& ChPhTemp) : LstChGS(), LstChPh() , LstPt()
{
        LstChGS.push_back(ChGSTemp);
        LstChPh.push_back(ChPhTemp);
}
scene::scene(const characterGeoShape& ChGSTemp)  : LstChGS(), LstChPh() , LstPt()
{
        LstChGS.push_back(ChGSTemp);
}
scene::scene(const characterPhoto& ChPhTemp)  : LstChGS(), LstChPh() , LstPt()
{
        LstChPh.push_back(ChPhTemp);
}

void scene::setSpriteOnTheScene(characterPhoto& ChPhTemp)
{
        ChPhTemp.setOrigin(20,20);
        ChPhTemp.setPosition(100,80);
        ChPhTemp.setRotation(30);
        ChPhTemp.setScale(0.1, 0.1);    
}

void scene::setSpriteOnTheScene(characterGeoShape& ChGSTemp)
{
         ChGSTemp.setOrigin(20,20);
        ChGSTemp.setPosition(100,80);
        ChGSTemp.setRotation(30);
        //ChGSTemp.setScale(0.1, 0.1);   
}