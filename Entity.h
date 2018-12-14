//
// Created by nick on 14.12.18.
//

#ifndef ROADFIGHTER_ENTITY_H
#define ROADFIGHTER_ENTITY_H

#include <iostream>
#include <vector>
#include <memory>
#include <math.h>

class Entity {
public:
    Entity();

    virtual ~Entity();

    virtual void render() = 0;
    virtual void update() = 0;

    struct coordinats {
        float y = 0;
        float x = 0;
    };

    const coordinats &getPosition() const;

    coordinats position;
    coordinats speed;
    float accelerator;
    float maxSpeed;

};


#endif //ROADFIGHTER_ENTITY_H
