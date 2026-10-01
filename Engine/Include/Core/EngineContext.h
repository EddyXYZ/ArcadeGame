#pragma once

#include "Managers/RandomManager.h"

// --------------------------------------------------
//                   Engine context
// --------------------------------------------------
/*
    * Contains all engine managers
    * Shared across engine and games
    * Centralizes core functionalities
*/

struct EngineContext
{
    RandomManager random;
};