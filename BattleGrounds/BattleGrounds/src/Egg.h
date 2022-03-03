//
// Created by Administrator on 8/18/2021.
//

#ifndef TP_BATTLEARENA_EGG_H
#define TP_BATTLEARENA_EGG_H

#include <SDL.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "Utilities/Point.h"
#include "SkyboxElements/Arbre.h"
#include <SDL_opengl.h>
#include <GL/GLU.h>
class Egg {
private:
    GLuint eggID;

    float eggPosX;
    float eggPosY;
    float eggPosZ;

    float eggVelocity;
    float eggRadius = 10;

    Vector direction;

public:

    Egg(GLUquadric* params, float eggPosX, float eggPosY, float eggPosZ, float eggVelocity, float playerPosX, float playerPosY, float playerPosZ);

    void setEggPosX(float eggPosX);
    void setEggPosY(float eggPosY);
    void setEggPosZ(float eggPosZ);

    GLuint getEggId() const;

    float getEggRadius() const;

    void draw();
    void draw(float x, float y, float z);
    void move();
    bool collideWith(std::vector<Arbre*>& a);

    float getEggPosX() const;
    float getEggPosY() const;
    float getEggPosZ() const;

    void setDirection(Vector direction);

    virtual ~Egg();

};


#endif //TP_BATTLEARENA_EGG_H
