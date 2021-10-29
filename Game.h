#ifndef _GAME_
#define _GAME_
#include "SDL.h"

class Game{
public:
  Game(){}
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
};
#endif