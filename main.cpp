#include <iostream>
#include <random>
#include <vector>
#include "libs/camo_member.h"

int main() {
    std::vector<camo_member> members ;
    for(int i= 0;i<10;++i) {
        camo_member member = camo_member();
        members.push_back(member);
    }
    std::cout << "break_point";
    for(int a = 0;a<members.size();++a) {
        for(int b = 0;b<members.size()-1;++b) {
            if (members.at(b+1).get_color() > members.at(b).get_color()) {
                std::swap(members[b+1],members[b]);
            }
        }
        std::cout << "br1";
    }
    for (int i =0;i<5;++i) {
        members.erase(members.end()-i);
    }
    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_real_distribution<> random_module(0, 64);

    for(int i = 0;i<members.size();++i)
    {
        int a = static_cast<int>(random_module(mt));
        std::cout << a << std::endl;

    }

    std::cout <<"br2";
}
