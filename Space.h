//
// Created by rudri on 4/15/2024.
//

#ifndef _PROG3_SPACE_2024_1_SPACE_H
#define _PROG3_SPACE_2024_1_SPACE_H

#include <initializer_list>
#include <utility>
struct Point {
  int x;
  int y;
};

class Space {
  Point* points;
public:
  Space() = default;
  Space(std::initializer_list<std::pair<int, int>> points) {
  
  }
  void add_point(std::pair<int, int>) {
    
  }
};

out


#endif//_PROG3_SPACE_2024_1_SPACE_H
