#pragma once
#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include "Question.h"
#include"DifficultyLevel.h"


/**
 *A Player Class with several private variables and methods
 * @param   int Total                        an integer tracting player score
 * @param  char username                     a character variable storing player username
 * @param  Game_level Select                 an enum type/ difficulty level selected by user
 * @param   std::vector <Question> Tasks     a vector of questions read from file based on difficulty level selcted by player in Game_levl
 **/
class Player
{
    int Total = 0;
    string username;
    Game_level Select;
    std::vector <Question> Tasks;


public:


    /** A constructor for the Question Class without parameters**/
    Player();

    /** A public method that takes the input from the player, switches to the difficulty level, reads questions from a specific file per difficulty level and initials game play**/
    void Player_inputdata();

    /** A public method that displays all of the questions from a choosen category selected by the player read from a vector of questions **/
    void Player_play();
};

#endif