//
// Created by metaphaz on 8/4/24.
//

#ifndef CAMO_MEMBER_H
#define CAMO_MEMBER_H
#include <iostream>

class camo_member {
public:
    camo_member();
    unsigned char get_color() const;
    void set_color(unsigned char i_color);
    int get_fitness() const;
    void set_fitness(int i_fitness);
private:
    unsigned char generate_color();
    unsigned char color;
    int fitness;
};



#endif //CAMO_MEMBER_H
