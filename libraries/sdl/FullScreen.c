/*
 * FileName:     FullScreen
 * Author:       8ucchiman
 * CreatedDate:  2023-05-18 18:02:02
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    http://utsukemononi.gozaru.jp/gc/sdl/page002.html
 * Description:  ---
 */


#include <stdio.h>
#include <SDL/SDL.h>
#define MACRO

#ifndef MACRO
int main(int argc, char* argv[]){
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_FULLSCREEN);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}
#endif



#ifdef MACRO
int main(int argc, char** argv) {
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    SDL_Delay(3000);

    SDL_WM_ToggleFullScreen(SDL_GetVideoSurface());
    SDL_Delay(3000);
    SDL_WM_ToggleFullScreen(SDL_GetVideoSurface());
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}
#endif
