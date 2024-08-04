//
// Created by metaphaz on 8/4/24.
//

#include "camo_puddle.h"
#include "camo_member.h"
#include <iostream>
#include <vector>

camo_puddle::camo_puddle(int size_of_members, unsigned char target_color) {
    size_o_members = size_of_members;
    this->target_color = target_color;

    generate_members(size_o_members);
}
camo_puddle::camo_puddle(int size_of_members, unsigned char target_color, int elemination_per_round) {
    size_o_members = size_of_members;
    this->target_color = target_color;
    this->elemination_per_round = elemination_per_round;

    generate_members(size_o_members);
}
camo_puddle::camo_puddle(int size_of_members, unsigned char target_color, int elemination_per_round, double mutation_rate) {
    size_o_members = size_of_members;
    this->target_color = target_color;
    this->elemination_per_round = elemination_per_round;
    this->mutation_rate = mutation_rate;

    generate_members(size_o_members);
}
void camo_puddle::generate_members(const int num) {
    for(int i=0;i<num;++i) {
        camo_member member = camo_member();
        members.push_back(member);
    }
}
void camo_puddle::calculate_fitness() {
    for(camo_member& member : members) {
        member.set_fitness(fitness_formula(member.get_color()));
    }
}
int camo_puddle::fitness_formula(unsigned char member_color) {
    return 255-(member_color-target_color);
}
void camo_puddle::sort_members() {
    for(int a = 0;a<members.size();++a) {
        for(int b = 0;b<members.size()-1;++b) {
            if (members.at(b+1).get_fitness() > members.at(b).get_fitness()) {
                std::swap(members[b+1],members[b]);
            }
        }
    }
}
void camo_puddle::eleminate_members() {
    for (int i =0;i<(elemination_per_round);++i) {
        members.erase(members.end()-i);
    }
}
void camo_puddle::reproduce() {

}





