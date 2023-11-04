/**
 * @file Goldeen.h
 * @author Prajeeth Naliganti
 *
 *
 */

#ifndef AQUARIUM_AQUARIUM_AQUARIUMLIB_GOLDEEN_H
#define AQUARIUM_AQUARIUM_AQUARIUMLIB_GOLDEEN_H

#include "Item.h"
#include "Fish.h"

/**
 * class for making goldeen fish
 * @class Goldeen
 */
class Goldeen : public Fish
{
private:

public:
    /// Default constructor (disabled)
    Goldeen() = delete;

    /// Copy constructor (disabled)
    Goldeen (const Goldeen &) = delete;

    /// Assignment operator
    void operator=(const Goldeen &) = delete;

    Goldeen(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;




};

#endif //AQUARIUM_AQUARIUM_AQUARIUMLIB_GOLDEEN_H
