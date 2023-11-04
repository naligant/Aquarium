/**
 * @file ClownFish.h
 * @author Prajeeth Naliganti
 *
 *
 */

#ifndef AQUARIUM_AQUARIUM_AQUARIUMLIB_CLOWNFISH_H
#define AQUARIUM_AQUARIUM_AQUARIUMLIB_CLOWNFISH_H

#include "Item.h"
#include "Fish.h"

/**
 * class for making clown fish
 * @class ClownFish
 */
class ClownFish : public Fish
{
private:


public:
    /// Default constructor (disabled)
    ClownFish() = delete;

    /// Copy constructor (disabled)
    ClownFish(const ClownFish &) = delete;

    /// Assignment operator
    void operator=(const ClownFish &) = delete;

    ClownFish(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;


};

#endif //AQUARIUM_AQUARIUM_AQUARIUMLIB_CLOWNFISH_H
