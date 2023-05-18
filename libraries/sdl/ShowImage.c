/*
 * FileName:     ShowImage
 * Author:       8ucchiman
 * CreatedDate:  2023-05-18 18:18:55
 * LastModified: 2023-02-26 13:30:39 +0900
 * Reference:    8ucchiman.jp
 * Description:  ---
 */


#include <stdio.h>
#include <SDL/SDL.h>
#define MACRO

#ifdef MACRO
int main(int argc, char* argv[]){
    SDL_Surface* image;
    SDL_Rect rect, scr_rect;

    SDL_Init(SDL_INIT_EVERYTHING);
    SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE);
    image = SDL_LoadBMP("dots.bmp");

    rect.x = 0;
    rect.y = 0;
    rect.w = image->w;
    rect.h = image->h;

    scr_rect.x = 0;
    scr_rect.y = 0;

    SDL_BlitSurface(image, &rect, SDL_GetVideoSurface(), &scr_rect);
    SDL_Flip(SDL_GetVideoSurface());
    SDL_Delay(3000);
    SDL_FreeSurface(image);
    SDL_Quit();
    return 0;
}
#endif

