#ifndef _PLAYER_
#define _PLAYER_
#include "SDLGameObject.h"

class Player : public SDLGameObject
{
  public:
  Player(const LoaderParams* pParams);
  void draw();
  void update();
  void clean();
    
};
#endif