#pragma once
#ifndef QUESTION_H
#define QUESTION_H

#include <string>
using namespace std;


/**
 *A Question Class with several private variables and methods
 * @param   std::string question_text            a string variable storing question text
 * @param  std::string a                        a string variable storing option a
 * @param  std::string b                        a string variable storing option b
 * @param  std::string c                        a string variable storing option c
 * @param  std::string d                        a string variable storing option d
 * @param  std::string answer                   a string variable storing the the correct option between a,b,c,d
 * @param  int mark                             an integer variable storing the mark
 **/

class Question
{
private:
    std::string question_text, a, b, c, d, answer;
    int mark=0;

public:
    /**
    *A public method of the Question Class that evaluates the response from the player with the answer and returns a pass(1) or fail(0)
    * @param  std::string response            a string variable with the response from player
    * @param  std::string answer              a string variable storing the the correct option between a,b,c,d for the question class
    * @return bool 0                          failed question
    * @return bool 1                          passed question
    * */
    bool Evaluate_ans(std::string response, std::string _answer) { if (response == _answer) { return 1; } else { return 0; } };

    /**
    * A constructor for the Question Class with given parameters
    *@param   std::string Question_text            a string variable storing question text
    * @param  std::string A                        a string variable storing option a
    * @param  std::string B                        a string variable storing option b
    * @param  std::string C                        a string variable storing option c
    * @param  std::string D                      a string variable storing option d
    * @param  std::string Answer                   a string variable storing the the correct option between a,b,c,d
    * @param  int Mark                             an integer variable storing the mark
    * */
    Question(std::string Question_text, std::string  A, std::string  B, std::string  C, std::string D, std::string Answer, int Mark);

    /** A constructor for the Question Class without parameters**/
    Question();

   /**
   * A public method that intializes the variables and sets a question 
   *@param   std::string Rquestion_text            a string variable storing question text
   * @param  std::string Ra                        a string variable storing option a
   * @param  std::string Rb                        a string variable storing option b
   * @param  std::string Rc                        a string variable storing option c
   * @param  std::string Rd                        a string variable storing option d
   * @param  std::string Ranswer                   a string variable storing the the correct option between a,b,c,d
   * @param  int Rmark                             an integer variable storing the mark
   * */
    void Question_set(std::string Rquestion_text, std::string Ra, std::string Rb, std::string Rc, std::string Rd, std::string Ranswer, int Rmark);

    /**
    * A public method that displays the question to player, receives the response, checks if the answer is correct and allocates score for the question
    * @return  int score                           an integer variable storing the mark for the question based on evaluation from the  bool Evaluate_ans() method.
    * */
    int Get_answer();
};

#endif


