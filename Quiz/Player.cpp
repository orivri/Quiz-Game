#include <iostream>
#include "Player.h"
#include "QuestionSet.h"
#include "DifficultyLevel.h"
#include "ReadingFile.h"


Player::Player()
{
    Player_inputdata();
}

void Player::Player_inputdata()
{
    char difficulty;
    std::string file;
    std::vector< std::vector<std::string>> questionsfromfile;
    quiz_question Set;

    std::cout << "Welcome to TEST-ME quiz game \n" << '\n';

    std::cout << "Please select Quiz difficulty level type : \n 1 for simple \n 2 for average \n 3 for hard " << '\n';
    std::cin >> difficulty;

    std::cout << "please Type in your user name" << '\n';

    getline(std::cin, username);
    getline(std::cin, username);


    Game_level Select = convert(difficulty);
    switch (Select)
    {

    case Game_level::simple:

        std::cout << "\n Simple Quiz Game mode activated \n";

        file = "question_simple.txt";
        questionsfromfile = read_questions(file);

        for (int row = 0; row < questionsfromfile.size(); row++)
        {
            for (int col = 0; col < questionsfromfile[0].size(); col++)
            {
                if (row == 0)
                {

                    Set.q1.Question_set(questionsfromfile[0][0], questionsfromfile[0][1], questionsfromfile[0][2], questionsfromfile[0][3], questionsfromfile[0][4], questionsfromfile[0][5], stoi(questionsfromfile[0][6]));

                }
                if (row == 1)
                {

                    Set.q2.Question_set(questionsfromfile[1][0], questionsfromfile[1][1], questionsfromfile[1][2], questionsfromfile[1][3], questionsfromfile[1][4], questionsfromfile[1][5], stoi(questionsfromfile[1][6]));

                }
                if (row == 2)
                {

                    Set.q3.Question_set(questionsfromfile[2][0], questionsfromfile[2][1], questionsfromfile[2][2], questionsfromfile[2][3], questionsfromfile[2][4], questionsfromfile[2][5], stoi(questionsfromfile[2][6]));


                }
                if (row == 3)
                {

                    Set.q4.Question_set(questionsfromfile[3][0], questionsfromfile[3][1], questionsfromfile[3][2], questionsfromfile[3][3], questionsfromfile[3][4], questionsfromfile[3][5], stoi(questionsfromfile[3][6]));

                }
                if (row == 4)
                {
                    Set.q5.Question_set(questionsfromfile[4][0], questionsfromfile[4][1], questionsfromfile[4][2], questionsfromfile[4][3], questionsfromfile[4][4], questionsfromfile[4][5], stoi(questionsfromfile[4][6]));


                }
                if (row == 5)
                {

                    Set.q6.Question_set(questionsfromfile[5][0], questionsfromfile[5][1], questionsfromfile[5][2], questionsfromfile[5][3], questionsfromfile[5][4], questionsfromfile[5][5], stoi(questionsfromfile[5][6]));


                }
                if (row == 6)
                {
                    Set.q7.Question_set(questionsfromfile[6][0], questionsfromfile[6][1], questionsfromfile[6][2], questionsfromfile[6][3], questionsfromfile[6][4], questionsfromfile[6][5], stoi(questionsfromfile[6][6]));

                }
                if (row == 7)
                {
                    Set.q8.Question_set(questionsfromfile[7][0], questionsfromfile[7][1], questionsfromfile[7][2], questionsfromfile[7][3], questionsfromfile[7][4], questionsfromfile[7][5], stoi(questionsfromfile[7][6]));

                }
                if (row == 8)
                {

                    Set.q9.Question_set(questionsfromfile[8][0], questionsfromfile[8][1], questionsfromfile[8][2], questionsfromfile[8][3], questionsfromfile[8][4], questionsfromfile[8][5], stoi(questionsfromfile[8][6]));

                }
                if (row == 9)
                {
                    Set.q10.Question_set(questionsfromfile[9][0], questionsfromfile[9][1], questionsfromfile[9][2], questionsfromfile[9][3], questionsfromfile[9][4], questionsfromfile[9][5], stoi(questionsfromfile[9][6]));

                }

            }
        }

        Tasks = { Set.q1, Set.q2,Set.q3,Set.q4, Set.q5, Set.q6, Set.q7, Set.q8, Set.q9, Set.q10 };

        Player_play();

        break;
    case Game_level::medium:

        std::cout << "\n Medium Quiz Game mode activated \n";

        file = "question_medium.txt";
        questionsfromfile = read_questions(file);

        for (int row = 0; row < questionsfromfile.size(); row++)
        {
            for (int col = 0; col < questionsfromfile[0].size(); col++)
            {
                if (row == 0)
                {

                    Set.q1.Question_set(questionsfromfile[0][0], questionsfromfile[0][1], questionsfromfile[0][2], questionsfromfile[0][3], questionsfromfile[0][4], questionsfromfile[0][5], stoi(questionsfromfile[0][6]));

                }
                if (row == 1)
                {

                    Set.q2.Question_set(questionsfromfile[1][0], questionsfromfile[1][1], questionsfromfile[1][2], questionsfromfile[1][3], questionsfromfile[1][4], questionsfromfile[1][5], stoi(questionsfromfile[1][6]));

                }
                if (row == 2)
                {

                    Set.q3.Question_set(questionsfromfile[2][0], questionsfromfile[2][1], questionsfromfile[2][2], questionsfromfile[2][3], questionsfromfile[2][4], questionsfromfile[2][5], stoi(questionsfromfile[2][6]));


                }
                if (row == 3)
                {

                    Set.q4.Question_set(questionsfromfile[3][0], questionsfromfile[3][1], questionsfromfile[3][2], questionsfromfile[3][3], questionsfromfile[3][4], questionsfromfile[3][5], stoi(questionsfromfile[3][6]));

                }
                if (row == 4)
                {
                    Set.q5.Question_set(questionsfromfile[4][0], questionsfromfile[4][1], questionsfromfile[4][2], questionsfromfile[4][3], questionsfromfile[4][4], questionsfromfile[4][5], stoi(questionsfromfile[4][6]));


                }
                if (row == 5)
                {

                    Set.q6.Question_set(questionsfromfile[5][0], questionsfromfile[5][1], questionsfromfile[5][2], questionsfromfile[5][3], questionsfromfile[5][4], questionsfromfile[5][5], stoi(questionsfromfile[5][6]));


                }
                if (row == 6)
                {
                    Set.q7.Question_set(questionsfromfile[6][0], questionsfromfile[6][1], questionsfromfile[6][2], questionsfromfile[6][3], questionsfromfile[6][4], questionsfromfile[6][5], stoi(questionsfromfile[6][6]));

                }
                if (row == 7)
                {
                    Set.q8.Question_set(questionsfromfile[7][0], questionsfromfile[7][1], questionsfromfile[7][2], questionsfromfile[7][3], questionsfromfile[7][4], questionsfromfile[7][5], stoi(questionsfromfile[7][6]));

                }
                if (row == 8)
                {

                    Set.q9.Question_set(questionsfromfile[8][0], questionsfromfile[8][1], questionsfromfile[8][2], questionsfromfile[8][3], questionsfromfile[8][4], questionsfromfile[8][5], stoi(questionsfromfile[8][6]));

                }
                if (row == 9)
                {
                    Set.q10.Question_set(questionsfromfile[9][0], questionsfromfile[9][1], questionsfromfile[9][2], questionsfromfile[9][3], questionsfromfile[9][4], questionsfromfile[9][5], stoi(questionsfromfile[9][6]));

                }

            }
        }

        Tasks = { Set.q1, Set.q2,Set.q3,Set.q4, Set.q5, Set.q6, Set.q7, Set.q8, Set.q9, Set.q10 };

        Player_play();

        break;

    case Game_level::hard:

        std::cout << "Hard Quiz Game mode activated" << '\n';

        file = "question_hard.txt";
        questionsfromfile = read_questions(file);

        for (int row = 0; row < questionsfromfile.size(); row++)
        {
            for (int col = 0; col < questionsfromfile[0].size(); col++)
            {
                if (row == 0)
                {

                    Set.q1.Question_set(questionsfromfile[0][0], questionsfromfile[0][1], questionsfromfile[0][2], questionsfromfile[0][3], questionsfromfile[0][4], questionsfromfile[0][5], stoi(questionsfromfile[0][6]));

                }
                if (row == 1)
                {

                    Set.q2.Question_set(questionsfromfile[1][0], questionsfromfile[1][1], questionsfromfile[1][2], questionsfromfile[1][3], questionsfromfile[1][4], questionsfromfile[1][5], stoi(questionsfromfile[1][6]));

                }
                if (row == 2)
                {

                    Set.q3.Question_set(questionsfromfile[2][0], questionsfromfile[2][1], questionsfromfile[2][2], questionsfromfile[2][3], questionsfromfile[2][4], questionsfromfile[2][5], stoi(questionsfromfile[2][6]));


                }
                if (row == 3)
                {

                    Set.q4.Question_set(questionsfromfile[3][0], questionsfromfile[3][1], questionsfromfile[3][2], questionsfromfile[3][3], questionsfromfile[3][4], questionsfromfile[3][5], stoi(questionsfromfile[3][6]));

                }
                if (row == 4)
                {
                    Set.q5.Question_set(questionsfromfile[4][0], questionsfromfile[4][1], questionsfromfile[4][2], questionsfromfile[4][3], questionsfromfile[4][4], questionsfromfile[4][5], stoi(questionsfromfile[4][6]));


                }
                if (row == 5)
                {

                    Set.q6.Question_set(questionsfromfile[5][0], questionsfromfile[5][1], questionsfromfile[5][2], questionsfromfile[5][3], questionsfromfile[5][4], questionsfromfile[5][5], stoi(questionsfromfile[5][6]));


                }
                if (row == 6)
                {
                    Set.q7.Question_set(questionsfromfile[6][0], questionsfromfile[6][1], questionsfromfile[6][2], questionsfromfile[6][3], questionsfromfile[6][4], questionsfromfile[6][5], stoi(questionsfromfile[6][6]));

                }
                if (row == 7)
                {
                    Set.q8.Question_set(questionsfromfile[7][0], questionsfromfile[7][1], questionsfromfile[7][2], questionsfromfile[7][3], questionsfromfile[7][4], questionsfromfile[7][5], stoi(questionsfromfile[7][6]));

                }
                if (row == 8)
                {

                    Set.q9.Question_set(questionsfromfile[8][0], questionsfromfile[8][1], questionsfromfile[8][2], questionsfromfile[8][3], questionsfromfile[8][4], questionsfromfile[8][5], stoi(questionsfromfile[8][6]));

                }
                if (row == 9)
                {
                    Set.q10.Question_set(questionsfromfile[9][0], questionsfromfile[9][1], questionsfromfile[9][2], questionsfromfile[9][3], questionsfromfile[9][4], questionsfromfile[9][5], stoi(questionsfromfile[9][6]));

                }

            }
        }

        Tasks = { Set.q1, Set.q2,Set.q3,Set.q4, Set.q5, Set.q6, Set.q7, Set.q8, Set.q9, Set.q10 };

        Player_play();

        break;

    case Game_level::other:

        std::cout << " The difficulty level you selected is not available, please start over and select difficulty level: 1 = simple \n 2 for average\n 3 for hard\n 4 for expert \n" << "Good-bye and try again soon";

        break;

    };
   
}

void Player::Player_play()
{ 
    std::cout << "\n Your Quiz game has been generated begin!!!" << '\n';
   
    for (int t=0 ; t < Tasks.size(); t++)
    {
        Total += Tasks[t].Get_answer();
    }

    std::cout << username << "  your total game score is : " << Total << "/ 100 \n";
};