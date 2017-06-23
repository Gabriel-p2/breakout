#ifndef NPC_H
#define NPC_H

typedef struct _NPC {
    int posX;
    int posY;
    int stepX;
    int stepY;
    SDL_Surface* image;
    int imgW;
    int imgH;
} NPC;

extern NPC ball;
extern NPC bars[30];
extern NPC player;

#endif
