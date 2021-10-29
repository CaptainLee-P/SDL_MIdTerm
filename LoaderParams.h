/*
  std::string m_textureID;
  int m_x;
  int m_y;
  int m_width;
  int m_height;

  int m_currentFrame;
  int m_currentRow;*/
#include <iostream>
class LoaderParams{
public:
  LoaderParams(int x, int y, int width, int height, std::string textureID)
  :m_x(x),m_y(y),m_width(width),m_height(height),m_textureID(textureID){}
  int getX() const {return m_x;}
  int getY() const {return m_y;}
  int getWidth() const {return m_width;}
  int getHeight() const {return m_height;}
  std::string getTextureID() const {return m_textureID;}
private:
int m_x, m_y;
int m_width, m_height;
std::string m_textureID;
};