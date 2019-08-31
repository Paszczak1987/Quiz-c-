#ifndef QUESTION_H
#define QUESTION_H

#include <string>

class Question
{
public:
   void load();
   void ask_a_question();
   void check();
   void setQuestionNr(int nr);
   int getScore();

private:
   int question_nr;
   int score = 0;
   std::string content;
   std::string a, b, c, d;
   std::string correct;
   std::string answer;
};

#endif //QUESTION_H