#ifndef READINGFILE_H
#define READINGFILE_H

#include <vector>
#include "Question.h"



/**This function helps allocate per question the variables/properities(c) for each question.
 * @param int NumberofQuestion               number of rows/questions to be entered into the matrix container and saved to file (r where r1 = question 1 and properties, r2 =question 2 and properties.....) 
 * @param int QuestionParameters             number of columns/options per question (where (c1 = quetion text),(c2-c5 = options [a, b, c, d]), the answer(c6) and the marks(c7) )
 **/
std::string values(int  NumberofQuestion, int  QuestionParameters);

/** It generates and creates nrows of question each quetion with a fixed ncol of property  **/
void create_questions();

/**
 *The function reads a matrix of random number from a file
 *@param   std::string file_name                        a string variable storing the file name from which data is read
 *@return  std::vector< std::vector<std::string>> data       returns a vector of vector matrix containing the read matrix
 **/
std::vector< std::vector<std::string>> read_questions(std::string filename);


/**
 *The function shuffles a matrix of questions and returns a shuffled version
 * @param   std::vector<std::vector<string>> Tasks   vector of vector to be shuffled
 * @return  std::vector<std::vector<string>> Tasks   new vector of vector after shuffling
 **/
std::vector<Question> shuffle(std::vector<Question> Tasks);

/**
 *The function debugs a matrix showing of a set of questions and all its variables on the console
 * @param  std::vector<std::vector<string>> vect        A vector of vector of strings printed to the output
 **/
void debug_questions(std::vector< std::vector<std::string>>vect);

#endif