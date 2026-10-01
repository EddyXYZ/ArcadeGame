#pragma once

#include <SFML/System/Vector2.hpp>
#include <SFML/System/Angle.hpp>
#include <SFML/Graphics/Color.hpp>
#include <random>

class RandomManager
{
private:
    std::random_device device_; // Gets a random seed
    std::mt19937 generator_; // Creates random numbers using the random seed

public:
    RandomManager();

    int Int(int min, int max);
    float Float(float min, float max);
    bool Bool(float probability = 0.5f);
    sf::Vector2f Position(sf::Vector2f min, sf::Vector2f max);
    sf::Angle Angle(sf::Angle min, sf::Angle max);
    sf::Color Color(sf::Color min, sf::Color max);
};