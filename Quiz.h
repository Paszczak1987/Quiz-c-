#ifndef QUIZ_H
#define QUIZ_H

#include "Question.cpp"
#include <vector>

class Quiz
{
public:
   Quiz(int a);
   void run();

private:
   int score_sum;
   std::vector<Question> questions;
};

#endif //QUIZ_H