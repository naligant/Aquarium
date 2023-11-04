/**
 * @file AquariumView.h
 * @author Prajeeth Naliganti
 *
 */
#include "Aquarium.h"
#ifndef AQUARIUM_AQUARIUMLIB_AQUARIUMVIEW_H
#define AQUARIUM_AQUARIUMLIB_AQUARIUMVIEW_H

/**
 * class for making window for aquarium
 * @class AquariumView
 */
class AquariumView : public wxWindow
{
private:
    void OnPaint(wxPaintEvent& event);
    /// An object that describes our aquarium
    Aquarium  mAquarium;

    /// Any item we are currently dragging
    std::shared_ptr<Item> mGrabbedItem;

    /// The timer that allows for animation
    wxTimer mTimer;

    /// Stopwatch used to measure elapsed time
    wxStopWatch mStopWatch;

    /// The last stopwatch time
    long mTime = 0;

public:
    void Initialize(wxFrame* parent);
    void OnAddFishBetaFish(wxCommandEvent& event);
    void OnAddClownFish(wxCommandEvent& event);
    void OnAddGoldeen(wxCommandEvent& event);
    void OnAddDecorCastle(wxCommandEvent& event);
    void OnLeftDown(wxMouseEvent &event);
    void OnLeftUp(wxMouseEvent &event);
    void OnMouseMove(wxMouseEvent &event);
    void OnFileSaveAs(wxCommandEvent& event);
    void OnFileOpen(wxCommandEvent& event);
    void OnTimer(wxTimerEvent& event);

};

#endif //AQUARIUM_AQUARIUMLIB_AQUARIUMVIEW_H
