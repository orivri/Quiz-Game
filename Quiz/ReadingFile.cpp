#include <vector>
#include<string>
#include <string.h>
#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <string>
#include <cstddef>
#include <cstdlib>

#include "StringManipulators.h"
#include "ReadingFile.h"
#include "Question.h"



std::string values(int Number, int c)
{
    std::string value = " ";
    char temp = '"';
    char delim = ',';
    std::string line = " ";


        for (int C = 0; C < c; C++)
        {
           
            if (C == 0) 
            { 
                std::cout << "Please enter data for Question" << Number << '\n'; 
                std::cout << "Type in Question text: \n"; cin >> value;
                line = temp + value + temp + delim;
            }
            if (C == 1) 
            { 
                std::cout << "enter answer for option A : \n"; cin >> value;
                line += temp + value + temp + delim;
            }
            if (C == 2) 
            { 
                std::cout << "enter answer for option B : \n"; cin >> value; 
                line += temp + value + temp + delim;
            }
            if (C == 3) 
            { 
                std::cout << "enter answer for option C : \n"; cin >> value;
                line += temp + value + temp + delim;
            }
            if (C == 4) 
            {
                std::cout << "enter answer for option D : \n"; cin >> value;
                line += temp + value + temp + delim ;
            }
            if (C == 5) 
            { 
                std::cout << "Which is the answer is the correct option, select from option A,B,C,D : \n"; cin >> value;
                line += temp + value + temp + delim;
            }
            if (C == 6)
            { 
                std::cout << "enter the mark obtained for answering correctly : \n"; cin >> value; 
                line += temp + value + temp + ';' + '\n';
            }
        }

    return line;
}

void create_questions()
{
    std::string file_name = "";
    int NumberofQuestion = 0;
    int QuestionParameters = 7;

    std::cout << "Please how many questions do you want printed/ saved  to the file ?\n";
    cin >> NumberofQuestion;
    std::cout << "Please enter a file name to be created for questions to be printed / saved ";
    getline(cin, file_name );
    getline(cin, file_name);
    file_name += ".txt";


    std::ofstream file(file_name); //ofstream + open
    if (file) //is it open?
    {
        int Qcounter = 0;
        std::string input = "";
        
        for (int r = 0; r < NumberofQuestion; r++)
        {
            Qcounter = r + 1;
            file << '#' << Qcounter << '\n';
           
                input = values(r, QuestionParameters);
                file << input ;
          
        }
        file.close();
        std::cout << NumberofQuestion << " questions has been printed  to : the file " << file_name << '\n';
    }
}

std::vector< std::vector<std::string>> read_questions(std::string filename)
{
    char question_start = '#';
    char question_end = ';';
    char delim = ',';

    std::vector< std::vector<std::string>> data;
    
    std::ifstream in(filename);

    if (in)
    {
        std::string line; //string type
       
            while (getline(in, line))
            {

                line = Remove_question_no(line, question_start);
                if (line.empty()) continue;

                line = trim(line);
                line = Replace(line, delim);

                std::stringstream ss(line);
                std::vector<std::string> row;
                std::string d;

                while (ss >> d)
                {
                    d = trim(d);
                    row.push_back(d);
                }

                data.push_back(row);
            }

            in.close();
    }
    return data;
}

std::vector<Question> shuffle(std::vector<Question> Tasks)
{
    std::vector<Question> shuffled_pack;
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::default_random_engine s(seed);
    std::shuffle(Tasks.begin(), Tasks.end(), s);

    return Tasks;
}

void debug_questions(std::vector< std::vector<std::string>>vect)
{
    for (auto i = 0; i < vect.size(); i++)
    {
        for (auto j = 0; j < vect[0].size(); j++)
        {
            std::cout << vect[i][j] << " ";

        }
        std::cout << std::endl;
    }
}



