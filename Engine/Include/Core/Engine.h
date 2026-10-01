#pragma once

#include <SFML/Graphics.hpp>
#include "Core/EngineVisitor.h"
#include "Core/EngineContext.h"

// --------------------------------------------------
//                      Engine
// --------------------------------------------------
/*
    * Handles events, updates, and rendering
    * Stores and manages all managers
    * Links technical systems (resources/input) and gameplay
*/

class Engine
{
private:
    sf::RenderWindow window_;
    EngineContext context_;
    friend EngineVisitor; // Can access member functions

    void EventWindowClose();
    void EventWindowResized(sf::Vector2u size);
    void EventWindowFocusLost();
    void EventWindowFocusGained();

public:
    Engine();

    bool IsRunning() const;
    void ProcessEvents();
    void Update();
    void Render();
};