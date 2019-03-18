
#define SDL_MAIN_HANDLED
#include <SDL.h>

int main()
{
	SDL_Init(SDL_INIT_VIDEO);

	SDL_Window *window = SDL_CreateWindow(
		"SDL2 Window",
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		640,
		480,
		0);

	SDL_Renderer * renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
	SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
	SDL_RenderClear(renderer);
	SDL_RenderPresent(renderer);

	bool quitflag = false;

	do{
	  /*  Events */
	  SDL_Event e;
	  if(SDL_PollEvent(&e) !=0)
	  {
	    switch(e.type){
	      case SDL_QUIT:
	        quitflag = true;
	    }
	  }

	  /*  Render  */
	  SDL_Rect fillRect = { 640 / 4, 480 / 4, 640 / 2, 480 / 2 };
	  SDL_SetRenderDrawColor(renderer, 0xFF, 0x00, 0x00, 0xFF); 
	  SDL_RenderFillRect(renderer, &fillRect);

	  SDL_RenderPresent(renderer);

	} while (!quitflag);

	SDL_DestroyWindow(window);
	SDL_Quit();

	return 0;
}