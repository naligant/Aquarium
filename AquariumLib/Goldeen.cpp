/**
 * @file Goldeen.cpp
 * @author Prajeeth Naliganti
 */

#include "pch.h"
#include "Goldeen.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Fish filename
const wstring GoldeenImageName = L"images/goldeen.png";
/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
Goldeen::Goldeen(Aquarium *aquarium) : Fish(aquarium, GoldeenImageName)
{
    uniform_real_distribution<> distribution(90, 120);
    Fish::SetSpeeds(distribution(aquarium->GetRandom()), distribution(aquarium->GetRandom()));
}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* Goldeen::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);
    itemNode->AddAttribute(L"type", L"goldeen");
    itemNode->AddAttribute(L"speedx", wxString::FromDouble(GetSpeedX()));
    itemNode->AddAttribute(L"speedy", wxString::FromDouble(GetSpeedY()));
    return itemNode;
}
