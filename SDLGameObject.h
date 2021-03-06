#ifndef _SDLGAMEOBJECT_
#define _SDLGAMEOBJECT_
#include "GameObject.h"

class SDLGameObject : public GameObject{
public:
SDLGameObject(const LoaderParams* pParams);
  virtual void draw();
  virtual void update(){}
  virtual void clean(){}
  virtual ~SDLGameObject(){}
protected:
  std::string m_textureID;
  int m_x;
  int m_y;
  int m_width;
  int m_height;
  int m_currentFrame;
  int m_currentRow;

};
#endif