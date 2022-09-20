#include "Enum.h"

Game_level convert(char difficulty)
{
    Game_level r = Game_level::simple;
    

    if (difficulty == '1') { r = Game_level::simple; }
    if (difficulty == '2') { r = Game_level::medium; }
    if (difficulty == '3') { r = Game_level::hard; }
    if (difficulty == '0' or difficulty > '3') { r = Game_level::other; }
    return r;
}
