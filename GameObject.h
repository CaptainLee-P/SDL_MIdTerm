#ifndef _GAMEOBJECT_
#define _GAMEOBJECT_
#include <iostream>
#include "SDL_image.h"
#include "LoaderParams.h"
class GameObject{
public:
  virtual void draw()=0;
  virtual void update()=0;
  virtual void clean()=0;
  virtual ~GameObject(){}
protected:
GameObject(const LoaderParams* pParams){}
};
#endif