/**
 * @file Fish.h
 * @author Prajeeth Naliganti
 *
 *
 */
#include "Item.h"
#ifndef AQUARIUM_AQUARIUMLIB_FISH_H
#define AQUARIUM_AQUARIUMLIB_FISH_H

/**
 * Base class for a fish
 * This applies to all of the fish, but not the decor
 * items in the aquarium.
 */
class Fish : public Item
{
private:

    /// Fish speed in the X direction
    /// in pixels per second
    double mSpeedX;

    /// Fish speed in the Y direction
    /// in pixels per second
    double mSpeedY;

public:
    /// Default constructor (disabled)
    Fish() = delete;

    /// Copy constructor (disabled)
    Fish(const Fish &) = delete;

    /// Assignment operator
    void operator=(const Fish &) = delete;

    void Update(double elapsed) override;

    /**
     * Getter for fish speed x axis
     * @return mSpeedX
     */
    double GetSpeedX() { return mSpeedX; }

    /**
     * Getter for fish speed y axis
     * @return mSpeedY
     */
    double GetSpeedY() { return mSpeedY; }

    /**
     * setter for both x and y axis
     * @param speedx, speedy
     */
    void SetSpeeds(double speedx, double speedy) {mSpeedX= speedx; mSpeedY = speedy;}

protected:
    Fish(Aquarium *aquarium, const std::wstring &filename);

};

#endif //AQUARIUM_AQUARIUMLIB_FISH_H
