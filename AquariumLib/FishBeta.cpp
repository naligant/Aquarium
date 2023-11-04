/**
 * @file FishBeta.cpp
 * @author Prajeeth Naliganti
 */
#include "pch.h"
#include "FishBeta.h"
#include "Aquarium.h"
#include <string>

using namespace std;

/// Fish filename
const wstring FishBetaImageName = L"images/beta.png";

/**
 * Constructor
 * @param aquarium Aquarium this fish is a member of
 */
FishBeta::FishBeta(Aquarium *aquarium) : Fish(aquarium, FishBetaImageName)
{

    uniform_real_distribution<> distribution(20, 50);
    Fish::SetSpeeds(distribution(aquarium->GetRandom()), distribution(aquarium->GetRandom()));

}

/**
 * Save this fish to an XML node
 * @param node The parent node we are going to be a child of
 * @return
 */
wxXmlNode* FishBeta::XmlSave(wxXmlNode* node)
{
    auto itemNode = Fish::XmlSave(node);
    itemNode->AddAttribute(L"type", L"beta");
    itemNode->AddAttribute(L"speedx", wxString::FromDouble(GetSpeedX()));
    itemNode->AddAttribute(L"speedy", wxString::FromDouble(GetSpeedY()));


    return itemNode;
}




