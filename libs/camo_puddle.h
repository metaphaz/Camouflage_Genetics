//
// Created by metaphaz on 8/4/24.
//

#ifndef CAMO_PUDDLE_H
#define CAMO_PUDDLE_H
#include "camo_member.h"
#include <iostream>
#include <vector>


class camo_puddle {
public:
    camo_puddle(int size_of_members=64, unsigned char target_color = 214);
    camo_puddle(int size_of_members=64, unsigned char target_color = 214, int elemination_per_round = 32);
    camo_puddle(int size_of_members=64, unsigned char target_color = 214, int elemination_per_round = 32, double mutation_rate=0.05);
    void calculate_fitness();
    void sort_members();
    void eleminate_members();
    void reproduce();
    int show_adaptation();
    inline int fitness_formula(unsigned char member_color);
private:
    int size_o_members{0};
    unsigned char target_color{0};
    int elemination_per_round{0};
    double mutation_rate{0};
    int adaptation_rate{0};
    std::vector<camo_member> members;
    void generate_members(int num);
};



#endif //CAMO_PUDDLE_H
