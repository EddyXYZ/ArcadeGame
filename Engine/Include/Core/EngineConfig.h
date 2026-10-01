#pragma once

#include <SFML/System/Vector2.hpp>
#include <string>

// --------------------------------------------------
//                  Engine Config
// --------------------------------------------------
/*
    * Centralizes all engine settings
    * Stores fixed values at startup
    * Keeps configuration organized
*/

struct EngineConfig
{
    std::string windowTitle;
    sf::Vector2f windowSize;
    bool disableSfmlLogs;

    EngineConfig();
};

inline const EngineConfig gConfig; // Global variable