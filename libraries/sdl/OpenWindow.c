/*
 * FileName:     OpenWindow
 * Author:       8ucchiman
 * CreatedDate:  2023-05-18 17:50:08
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    http://utsukemononi.gozaru.jp/gc/sdl/page002.html
 * Description:  ---
 */


#include <stdio.h>
#include <SDL/SDL.h>
#define MACRO

#ifdef MACRO
int main(int argc, char* argv[]){
    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    SDL_Delay(3000);
    SDL_Quit();
    return 0;
}
#endif

