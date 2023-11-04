/**
 * @file FishBeta.h
 * @author Prajeeth Naliganti
 *
 *
 */

#ifndef AQUARIUM_AQUARIUM_AQUARIUMLIB_FISHBETA_H
#define AQUARIUM_AQUARIUM_AQUARIUMLIB_FISHBETA_H

#include "Item.h"
#include "Fish.h"
/**
 * class for making beta fish
 * @class FishBeta
 */
class FishBeta : public Fish
{
private:

public:
    /// Default constructor (disabled)
    FishBeta() = delete;

    /// Copy constructor (disabled)
    FishBeta(const FishBeta &) = delete;

    /// Assignment operator
    void operator=(const FishBeta &) = delete;

    FishBeta(Aquarium* aquarium);

    wxXmlNode* XmlSave(wxXmlNode* node) override;


};

#endif //AQUARIUM_AQUARIUM_AQUARIUMLIB_FISHBETA_H
