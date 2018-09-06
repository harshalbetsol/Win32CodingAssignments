#include "World.h"



World::World()
{
    //uniform distribution of particles

    for (auto& particle : m_particles)
    {
        Position p;
        p.x = generateUniformX();
        p.y = generateUniformY();
        particle.SetPosition(p);
    }
}


World::~World()
{
}

int World::generateUniformX()
{
    return uniformDistX(pseudoRandomDeviceX);
}

int World::generateUniformY()
{
    return uniformDistY(pseudoRandomDeviceY);
}