#include <iostream>
#include "Question.h"

//Question constructor

Question::Question()
{
   
}

Question::Question(std::string Question_text, std::string  A, std::string  B, std::string  C, std::string D, std::string Answer, int Mark)
{
    Question_set(Question_text, A, B, C, D, Answer, Mark);
}

//Question memeber function
bool Evaluate_ans(std::string response, std::string _answer) { if (response == _answer) { return 1; } else { return 0; } }

void Question::Question_set(std::string Rquestion_text, std::string Ra, std::string Rb, std::string Rc, std::string Rd, std::string Ranswer, int Rmark) 
{
    question_text = Rquestion_text;
    a = Ra;
    b = Rb;
    c = Rc;
    d = Rd;
    answer = Ranswer;
    mark = Rmark;
}

int Question::Get_answer() {


    int score = 0;
    std::string response = "";


    std::cout << "\n";
    std::cout << "Question : " << question_text << '\n';
    std::cout << "a. " << a << '\n';
    std::cout << "b. " << b << '\n';
    std::cout << "c. " << c << '\n';
    std::cout << "d. " << d << '\n';

    std::cout << " Select an answer from the options (a,b,c,d)" << "\n";

    std::cin >> response;

    std::cout << "confirm answer" << "\n";
    std::cin >> response;
  

    bool validate = Evaluate_ans(response, answer);

    if (Evaluate_ans(response, answer) == true)
    {
        score += mark;
    }
    else
    {
        score = 0;
    }
    return score;
}