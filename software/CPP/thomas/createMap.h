#pragma once

#include <array>
#include <iostream>
#include <cmath>
#include <vector>
#include "Antenna.h"
#include "Wall.h"


const float max_power = -30;
const float min_power = -80;

const Antenna TX2_emettor{ Point{-10, 0.5}, 26 * (float)pow(10, 9), 73, 3.16277 };
const Antenna TX3_emettor{ Point{-10, 0.5}, 26 * (float)pow(10, 9), 73, 3.16277 };

const Antenna TX_exercise{ Point{32, 10}, 868.3F * (float)pow(10,6), 73.0, 0.01 };
const Point RX_exercise{ 47, 65 };

/*
const std::vector<Wall> project_walls = {
   { {0.0, 0.0}, {0.0, 80.0}, 4.8 * eps0, 0.018, 0.15},
   { {0.0, 20.0}, {80, 20.0}, 4.8 * eps0, 0.018, 0.15},
   { {0.0, 80.0}, {80.0, 80.0}, 4.8 * eps0, 0.018, 0.15}
};
*/


const std::vector<Wall> project_walls = {
    {{0.0, 0.0}, {0.0, 45.0}, 4.6 * eps0, 0.02, 0.3 },
    { {0.0, 0.0}, {100.0, 0.0}, 4.6 * eps0, 0.02, 0.3},  
    { {0.0, 9.0}, {15, 9.0}, 2.25 * eps0, 0.04, 0.1},  
    { {0.0, 18.0}, {15.0, 18.0}, 2.25 * eps0, 0.04, 0.1},  
    { {0.0, 27.0}, {15.0, 27.0}, 2.25 * eps0, 0.04, 0.1},
    { {0.0, 36.0}, {15, 36.0}, 2.25 * eps0, 0.04, 0.1},
    { {0.0, 45.0}, {75.0, 45.0}, 5 * eps0, 0.014, 0.5},
    { {15.0, 0.0}, {15.0, 4.0}, 2.25 * eps0, 0.04, 0.1},
    { {15.0, 5.0}, {15, 13.0}, 2.25 * eps0, 0.04, 0.1},
    { {15.0, 14.0}, {15.0, 22.0}, 2.25 * eps0, 0.04, 0.1},
    { {15.0, 23.0}, {15.0, 31.0}, 2.24 * eps0, 0.04, 0.1},
    { {15.0, 32.0}, {15, 40.0},  2.25 * eps0, 0.04, 0.1},
    { {15.0, 41.0}, {15.0, 45.0}, 2.25 * eps0, 0.04, 0.1},
    { {35.0, 20.0}, {40.0, 15.0}, 2.25 * eps0, 0.04, 0.1},
    { {35.0, 30.0}, {40, 35.0}, 2.25 * eps0, 0.04, 0.1},
    { {50.0, 15.0}, {55.0, 20.0}, 2.25 * eps0, 0.04, 0.1},
    { {50.0, 35.0}, {55.0, 30.0}, 2.25 * eps0, 0.04, 0.1},
    { {85.0, 0.0}, {85.0, 12.8398}, 4.6 * eps0, 0.02, 0.3},
    {{85.0, 14.8398}, {85, 14.8398 + 12.8398}, 4.6 * eps0, 0.02, 0.3},
    { {100.0, 0.0}, {100.0, 70.0}, 4.6 * eps0, 0.02, 0.3},
    { {85.0, 27.6795}, {91.5, 27.6795}, 4.6 * eps0, 0.02, 0.3},
    { {93.5, 27.6795}, {100, 27.6795}, 4.6 * eps0, 0.02, 0.3},
    { {75.0, 45.0}, {85.0, 27.6795}, 4.6 * eps0, 0.02, 0.3},
    { {75.0, 45.0}, {75.0, 70.0}, 5 * eps0, 0.014, 0.5},
    { {75.0, 70.0}, {100.0, 70.0}, 5 * eps0, 0.014, 0.5},
    };

    


