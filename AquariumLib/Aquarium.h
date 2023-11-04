/**
 * @file Aquarium.h
 * @author Prajeeth Naliganti
 *
 */

#include <memory>
#include "Item.h"
#include <random>

#ifndef AQUARIUM_AQUARIUMLIB_AQUARIUM_H
#define AQUARIUM_AQUARIUMLIB_AQUARIUM_H

/**
 * Creates an aquarium
 * @class Aquarium
 */
class Aquarium
{
private:
    std::unique_ptr<wxBitmap> mBackground;  ///< Background image to use
    /// All of the items to populate our aquarium
    std::vector<std::shared_ptr<Item>> mItems;

    /// Random number generator
    std::mt19937 mRandom;

    void XmlItem(wxXmlNode *node);

public:
    void OnDraw(wxDC *dc);
    Aquarium();
    void Add(std::shared_ptr<Item> item);
    std::shared_ptr<Item> HitTest(int x, int y);
    void RemoveAddBack(std::shared_ptr<Item> item);
    void KillFish(Item *item);
    void Save(const wxString &filename);
    void Load(const wxString &filename);
    void Clear();
    void Update(double elapsed);

    /**
 * Get the width of the aquarium
 * @return Aquarium width in pixels
 */
    int GetWidth() const { return mBackground->GetWidth(); }

    /**
     * Get the height of the aquarium
     * @return Aquarium height in pixels
     */
    int GetHeight() const { return mBackground->GetHeight(); }


    /**
    * Get the random number generator
    * @return Pointer to the random number generator
    */
    std::mt19937 &GetRandom() {return mRandom;}



};

#endif //AQUARIUM_AQUARIUMLIB_AQUARIUM_H
