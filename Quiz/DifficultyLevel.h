#pragma 
#ifndef DIFFICULTYLEVEL_H
#define DIFFICULTYLEVL_H

#include"Enum.h"


/**The function reads the char input(difficulty) from player and allocates the correct enum difficulty type
 *@param std:: char difficulty     variable entered by player to select difficulty level
 *@return operation r              returns an enum type with a specific difficulty selected by player
**/

Game_level convert(char difficulty);

#endif

