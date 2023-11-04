/**
 * @file MainFrame.h
 * @author Prajeeth Naliganti
 *
 */

#ifndef AQUARIUM_AQUARIUMLIB_MAINFRAME_H
#define AQUARIUM_AQUARIUMLIB_MAINFRAME_H

/**
 * The top-level (main) frame of the application
 */
class MainFrame : public wxFrame
{
private:
    void OnExit(wxCommandEvent& event);
    void OnAbout(wxCommandEvent& event);

public:
    void Initialize();
};

#endif //AQUARIUM_AQUARIUMLIB_MAINFRAME_H
