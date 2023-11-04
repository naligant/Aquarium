/**
 * @file Fish.cpp
 * @author Prajeeth Naliganti
 */

#include "pch.h"
#include "Fish.h"
#include "Aquarium.h"
using namespace std;

/**
 * Constructor
 * @param aquarium The aquarium we are in
 * @param filename Filename for the image we use
 */
Fish::Fish(Aquarium *aquarium, const std::wstring &filename) :
    Item(aquarium, filename)
{
//    uniform_real_distribution<> distribution(mMinSpeed, mMaxSpeed);
//    mSpeedX = distribution(aquarium->GetRandom());
//    mSpeedY = distribution(aquarium->GetRandom());
}

/**
 * Handle updates in time of our fish
 *
 * This is called before we draw and allows us to
 * move our fish. We add our speed times the amount
 * of time that has elapsed.
 * @param elapsed Time elapsed since the class call
 */
void Fish::Update(double elapsed)
{
    //SetSpeed(mSpeedX, mSpeedY);
    double fishrightedge = 1024 - 10 - (GetItemWidth()/2);
    double fishleftedge = (GetItemWidth()/2) - 10;
    double fishedgebottom = (GetAquarium()->GetHeight()) - 10 - (GetItemHeight());
    double fishedgetop = (GetItemHeight()/2) - 10;

    SetLocation(GetX() + mSpeedX * elapsed,
                GetY() + mSpeedY * elapsed);

    if (mSpeedX > 0 && GetX() > fishrightedge)
    {
        mSpeedX = -mSpeedX;
        SetMirror(true);
    }
    else if (mSpeedX < 0 && GetX() < fishleftedge)
    {
        mSpeedX = -mSpeedX;
        SetMirror(false);
    }
    else if (mSpeedY > 0 && GetY() > fishedgebottom)
    {
        mSpeedY = -mSpeedY;
    }
    else if (mSpeedY < 0 && GetY() < fishedgetop)
    {
        mSpeedY = -mSpeedY;
    }

    //different speeds
}