#ifndef PLAYER_H
#define PLAYER_H

enum direction {
    NORTH,
    EAST,
    SOUTH,
    WEST
};

struct player{
    int pos[2];
    enum direction player_dir;
};

#endif
