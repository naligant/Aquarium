/**
 * @file AquariumApp.h
 * @author Prajeeth Naliganti
 *
 *
 */

#ifndef AQUARIUM__AQUARIUMAPP_H
#define AQUARIUM__AQUARIUMAPP_H

/**
 * Main application class
 */
class AquariumApp:public wxApp
{
private:

public:
    ///overrides base class initialization function
    bool OnInit() override;
};

#endif //AQUARIUM__AQUARIUMAPP_H
