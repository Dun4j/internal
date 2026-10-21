#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>

class Entity {
public:
  int get_pawn_handle(void) {
    return *(int*)(this + 0x844);
  }
  
  const char* get_name(void) {
    return (const char*)(this + 0x87C);
  }

  void set_fov(int fov) {
    *(int*)(this + 0x914) = fov;
  }
};

#endif
