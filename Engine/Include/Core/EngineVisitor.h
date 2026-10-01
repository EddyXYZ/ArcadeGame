#pragma once

#include <SFML/Window/Event.hpp>

// --------------------------------------------------
//                  Engine Visitor
// --------------------------------------------------
/*
    * Receives raw SFML events
    * Detects the event type
    * Calls engine action method
    * Separates SFML and engine logic
*/

struct EngineVisitor
{
    class Engine& engine; // Forward declaration (there is something out there, but it doesn't need to be known right now)

    // operator() makes EngineVisitor a callable object
    void operator()(const sf::Event::Closed&); 
    void operator()(const sf::Event::Resized& resized); 
    void operator()(const sf::Event::FocusLost&); 
    void operator()(const sf::Event::FocusGained&); 
    void operator()(const auto&) {}
};