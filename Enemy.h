#ifndef _ENEMY_
#define _ENEMY_
#include "SDLGameObject.h"
class Enemy : public SDLGameObject
{
  public:
  Enemy(const LoaderParams* pParams);
  virtual void draw();
  virtual void update();
  virtual void clean();
};
#endif