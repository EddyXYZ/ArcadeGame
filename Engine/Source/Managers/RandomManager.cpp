#include "Managers/RandomManager.h"

RandomManager::RandomManager()
{
    generator_.seed(device_());
}

int RandomManager::Int(int min, int max)
{
    return std::uniform_int_distribution(min, max)(generator_); // uniform_int_distribution makes every number between min & max have the same chance of being picked 
}

float RandomManager::Float(float min, float max)
{
    return std::uniform_real_distribution(min, max)(generator_); // uniform_real_distribution makes every number between min & max have the same chance of being picked 
}

bool RandomManager::Bool(float probability)
{
    return std::bernoulli_distribution(probability)(generator_); // bernoulli_distribution produces a random bool that is true with the given probability
}

sf::Vector2f RandomManager::Position(sf::Vector2f min, sf::Vector2f max)
{
    return { Float(min.x, max.x), Float(min.y, max.y) };
}

sf::Angle RandomManager::Angle(sf::Angle min, sf::Angle max)
{
    return sf::degrees(Float(min.asDegrees(), max.asDegrees()));
}

sf::Color RandomManager::Color(sf::Color min, sf::Color max)
{
    return { (uint8_t)Int(min.r, max.r), (uint8_t)Int(min.g, max.g), (uint8_t)Int(min.b, max.b) };
}