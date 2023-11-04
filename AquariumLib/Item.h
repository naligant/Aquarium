/**
 * @file Item.h
 * @author Prajeeth Naliganti
 *
 * Base class for any item in our aquarium.
 */

#ifndef AQUARIUM_AQUARIUMLIB_ITEM_H
#define AQUARIUM_AQUARIUMLIB_ITEM_H

/**
 * Base class for any item in our aquarium.
 * @class Item
 */

class Aquarium;

class Item
{
private:
    /// The aquarium this item is contained in
    Aquarium   *mAquarium;

    // Item location in the aquarium
    double  mX = 0;     ///< X location for the center of the item
    double  mY = 0;     ///< Y location for the center of the item

    /// The underlying fish image
    std::unique_ptr<wxImage> mItemImage;

    /// The bitmap we can display for this fish
    std::unique_ptr<wxBitmap> mItemBitmap;

    bool mMirror = false;   ///< True mirrors the item image

public:
    ~Item();

    /**
     * The X location of the item
     * @return X location in pixels
     */
    double GetX() const { return mX; }

    /**
     * The Y location of the item
     * @return Y location in pixels
     */
    double GetY() const { return mY; }

    /**
     * Set the item location
     * @param x X location in pixels
     * @param y Y location in pixels
     */
    virtual void SetLocation(double x, double y) { mX = x; mY = y; }

    /// Default constructor (disabled)
    Item() = delete;

    /// Copy constructor (disabled)
    Item(const Item &) = delete;

    /// Assignment operator
    void operator=(const Item &) = delete;

    /**
    * Draw this item
    * @param dc Device context to draw on
    */
    virtual void Draw(wxDC *dc);

    /**
    * Test this item to see if it has been clicked on
    * @param x X location on the aquarium to test in pixels
    * @param y Y location on the aquarium to test in pixels
    * @return true if clicked on
    */
    virtual bool HitTest(int x, int y);

    /**
     * The aquarium item
     * @return  location in pixels
     */
    Aquarium * GetAquarium() const  { return mAquarium; }

    virtual wxXmlNode *XmlSave(wxXmlNode *node);
    virtual void XmlLoad(wxXmlNode *node);
    /**
    * Handle updates for animation
    * @param elapsed The time since the last update
    */
    virtual void Update(double elapsed) {}

    /**
     * Get the pointer to the Aquarium object
     * @return Pointer to Aquarium object
     */
    Aquarium *GetAquarium() { return mAquarium;  }

    /**
     * getter for item width
     * @return the width of the item
     */
    double GetItemWidth() const { return mItemBitmap->GetWidth(); }

    /**
     * getter for item height
     * @return the height of the item
     */
    double GetItemHeight() const { return mItemBitmap->GetHeight(); }

    void SetMirror(bool m);

protected:
    Item(Aquarium *aquarium, const std::wstring &filename);

};

#endif //AQUARIUM_AQUARIUMLIB_ITEM_H
