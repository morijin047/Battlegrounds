//
// Created by jlidou on 2021-08-12.
//

#ifndef DEMOFIRSTSDL_UTILS_H
#define DEMOFIRSTSDL_UTILS_H
#include <string>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_opengl.h>
class Utils {
public:
    static void drawAxis(float taille);
    static void drawQuads(float height, float lenght, float red, float green, float blue);
    static void drawQuadsHollow(float height, float lenght, float red, float green, float blue);
    static void drawCube(float tailleX, float tailleY, float tailleZ);
    static void drawCube(float tailleX, float tailleY, float tailleZ, float red, float green, float blue);
    static void drawCube(float tailleX, float tailleY, float tailleZ, GLuint idTexture);
    static SDL_Surface * flipSurface(SDL_Surface * surface);
    static GLuint loadTexture(std::string path);
    static void drawSkybox(float tailleX, float tailleY, float tailleZ, GLuint idTexture);
};
#endif //DEMOFIRSTSDL_UTILS_H