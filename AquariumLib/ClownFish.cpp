/**
 * @file ClownFish.cpp
 * @author Prajeeth Naliganti
 */

#include "pch.h"
#include "ClownFish.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Fish filename
const wstring ClownFishImageName = L"images/clown-fish.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
ClownFish::ClownFish(Aquarium *aquarium) : Fish(aquarium,ClownFishImageName)
{
    uniform_real_distribution<> distribution(150, 200);
    Fish::SetSpeeds(distribution(aquarium->GetRandom()), distribution(aquarium->GetRandom()));
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* ClownFish::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);
    itemNode->AddAttribute(L"type", L"clown");
    itemNode->AddAttribute(L"speedx", wxString::FromDouble(GetSpeedX()));
    itemNode->AddAttribute(L"speedy", wxString::FromDouble(GetSpeedY()));
    return itemNode;
}

