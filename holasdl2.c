#include <stdio.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include<stdbool.h>
#include<SDL2/SDL_ttf.h>

#define WIDTH 640
#define HEIGHT 500
int main (){
	//Definimos variables
 	SDL_Window* window;
	SDL_Renderer* canvas;
	TTF_Font* font;
	SDL_Color foreground = {255,0,0,255};
	char* cadena = "Hola Mundo desde SDL2!";
	int status;
	bool running = true;
	//Iniciamos SDL
	status = SDL_Init(0);
	if(status != 0){
	printf("SDL no pudo iniciarse SDL: %s\n",SDL_GetError());
	return status;
}
	if(TTF_Init() !=0){
	 printf("No se pudo iniciar TTF: %s\n", SDL_GetError());
	 return status;
	}
	//Crear lienzo y ventana
	Window= SDL_CreateWindow(
	"Hola mundo"
	SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED,
	WIDTH,
	HEIGHT,
	0
);
	if (window == NULL) {
	 printf("No se pudo crear la ventana: %s\n", SDL_GetError());
	 return 1;
	}
	canvas = SDL_CreateRenderer(window, -1, 0);
	if(canvas == NULL){
	 printf("No se pudo crear el render: %s\n", SDL_GetError());
	 return 1;
	}
	font = TTF_OpenFont("./sus.ttf", 600);
	//cuerpo
	while(running){
	//Manejo de eventos
	SDL_Event e;
	while(SDL_PollEvent(&e)){
	 switch(e.type){
		 case SDL_QUIT:
	 	  running = false;
	 	  break;
	 }
	}
	//Actualizacion
	//Dibujado
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

#define WIDTH 640
#define HEIGHT 500
int main (){
	//Definimos variables
 	SDL_Window* window;
	SDL_Renderer* canvas;
	int status;
	//Iniciamos SDL
	status = SDL_Init();
	if(status != 0){
	printf("SDL no pudo iniciarse :(");
	return status;
}
	//Crear lienzo y ventana
	SDL_CreateWindow(window, 
	SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED,
	WIDTH,
	HEIGHT,
	0
);
	canvas = SDL_CreateRenderer(window, -1, 0);
	return 0;
}	
	#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

#define WIDTH 640
#define HEIGHT 500
int main (){
	//Definimos variables
 	SDL_Window* window;
	SDL_Renderer* canvas;
	int status;
	//Iniciamos SDL
	status = SDL_Init();
	if(status != 0){
	printf("SDL no pudo iniciarse :(");
	return status;
}
	//Crear lienzo y ventana
	SDL_CreateWindow(window, 
	SDL_WINDOWPOS_CENTERED,
	SDL_WINDOWPOS_CENTERED,
	WIDTH,
	HEIGHT,
	0
);
	canvas = SDL_CreateRenderer(window, -1, 0);
	return 0;
}
	SDL_SetRenderDrawColor(canvas, 255, 255, 255, 255);
	SDL_Surface text_rendered = TTF_RenderText_Blended(font, cadena, foreground);
	SDL_Texture* text_texture = SDL_CreateTextureFromSurface(canvas, text_rendered);
	SDL_RenderClear(canvas);
	SDL_RenderCopy(canvas, text_texture, NULL, NULL);
	SDL_RenderPresent(canvas);
	}
	//Destruccion de variables
	SDL_DestroyRenderer(canvas);
	SDL_DestroyWindow(window);
	//Quitar librerias
	TTF_Quit();
	SDL_Quit();
	return 0;
}
