//
// Created by metaphaz on 8/4/24.
//

#include "camo_member.h"
#include <random>
#define RAND_MAX = 255

camo_member::camo_member() {
    this->color = generate_color();
    this->fitness = 0;
}
unsigned char camo_member::generate_color(){
    std::random_device rd;  // Seed for the random number engine
    std::mt19937 gen(rd()); // Mersenne Twister engine
    std::uniform_int_distribution<> dis(0, 255); // Distribution range

    return static_cast<unsigned char>(dis(gen));
}
unsigned char camo_member::get_color() const {
    return color;
}
void camo_member::set_color(const unsigned char i_color) {
    color = i_color;
}
int camo_member::get_fitness() const{
    return fitness;
}
void camo_member::set_fitness(const int i_fitness) {
    fitness = i_fitness;
}



