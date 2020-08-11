#include "structures.h"

void get_adjacent(Coordinate pos, CoordArray *adjacent);
CoordArray find_closest_food(Game *game, Board *board, Battlesnake *you, Coordinate pos, int turn, int starving_threshold, int opening_turns, Coordinate* closest_food_pointer);
CoordArray find_weak_head(Game *game, Board *board, Battlesnake *you, Coordinate pos, Coordinate* closest_head_pointer);
bool will_collide(Board *board, Coordinate pos, CoordArray gone);
int check_area(Game *game, Board *board, Battlesnake *you, Coordinate pos, CoordArray gone, int current_area, int food_count, int max_area);
bool can_escape(Battlesnake *you, int area, int max_search);
bool distance_from_wall(Board *board, Coordinate pos, int distance);
bool near_head(Board *board, Battlesnake *you, Coordinate pos);
bool headon_death(Board *board, Battlesnake *you, Coordinate pos);
bool headon_kill(Board *board, Battlesnake *you, Coordinate pos);
bool wall_trap(Board *board, Battlesnake *you, Coordinate pos);
int max(int a, int b, int c, int d);
