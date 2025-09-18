#include <SDL2/SDL.h>
#include <fmt/core.h>
#include <cstdlib>

// Simple SDL2 + fmt example - meant for testing a C++17 project setup
// with external libraries in a GitHub Codespaces environment.

int main() {
  // Headless mode so it runs in Codespaces without a GUI
  if (!std::getenv("SDL_VIDEODRIVER")) std::setenv("SDL_VIDEODRIVER", "dummy", 1);

  if (SDL_Init(SDL_INIT_VIDEO) != 0) {
    fmt::print("SDL init failed: {}\n", SDL_GetError());
    return 1;
  }
  SDL_Window* win = SDL_CreateWindow("hello", 0, 0, 320, 240, 0);
  if (!win) {
    fmt::print("SDL window failed: {}\n", SDL_GetError());
    SDL_Quit();
    return 1;
  }
  fmt::print("Hello from fmt + SDL2. It works.\n");
  SDL_DestroyWindow(win);
  SDL_Quit();
  return 0;
}
