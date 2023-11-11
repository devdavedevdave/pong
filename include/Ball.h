#ifndef BALL_H
#define BALL_H

#include <SDL.h>
#include "Paddle.h"

typedef struct
{
    SDL_Rect ball;
    int movingUp;
    int movingLeft;
    int velocity;
} Ball;

void toggleMovingUp(Ball *ball);

void toggleMovingLeft(Ball *ball);

void setVelocity(Ball *ball, int value);

int getMovingUp(const Ball *ball);

int getMovingLeft(const Ball *ball);

int getVelocity(const Ball *ball);

void handleWallCollision(const Ball *ball, const Paddle *paddle);

void checkPaddleCollision(const Ball *ball, const Paddle *paddle);

#endif // BALL_H