#ifndef _GAME_
#define _GAME_
#include "SDL.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"
#include <vector>
class Game{
public:
  Game(){}
  static Game* Instance()
  {
    if(s_pInstance==0)
    {
      s_pInstance=new Game();
      return s_pInstance;
    }
    return s_pInstance;
  }
  SDL_Renderer* getRenderer() const {return m_pRenderer;} 
  ~Game(){}
  bool init(const char* title,int xpos,int ypos, int height, int width, int flags);
  void render();
  void update();
  bool running();
  void handleEvents();
  void clean();
  
private:
SDL_Window* m_pWindow = 0;
SDL_Renderer* m_pRenderer = 0;
bool m_bRunning;
static Game* s_pInstance;
std::vector<GameObject*> m_gameObjects;

};
typedef Game TheGame;
#endif