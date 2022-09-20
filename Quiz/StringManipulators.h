#ifndef STRINGMANIPULATORS_H
#define STRINGMANIPULATORS_H



/**
 *The function evaluates a line and extraxts line if the variable in the memory location @hash is encountered
 *@param std::string &line                        ampersand to address of line to be evaluated
 *@param char & question_start                        variable of character that triggers an extraction of line
 *@return std::string Line                        returns a string with substring from the line
 **/
std::string Remove_question_no(std::string& line, char& question_start);

/**
 *The function evaluates a line and replaces delimeters or separators with white space
 *@param std::string& line                        ampersand to address of line to be evaluated
 *@param char& delim	                          ampersand to address of with chararacter of delimiter to be evaluate
 *@return std::string Line                        returns a string with the edited line
 **/
std::string Replace(std::string& line, char& delim);

/**
 *The function evaluates a line and returns a string of words without - "" or ; used as boundary marks within a question
 *@param std::string s                        string of texts to be trimmed 
 *@return std::string s                        returns a string with the edited line
 **/
std::string trim(const std::string s);


#endif



