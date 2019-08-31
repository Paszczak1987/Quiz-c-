#include "Quiz.h"
#include <iostream>

Quiz::Quiz(int a)
    : score_sum{0}
{
   for (int i = 0; i < a; i++)
   {
      questions.push_back(Question());
   }
}
void Quiz::run()
{
   for (int i = 0; i < questions.size(); i++)
   {
      questions[i].setQuestionNr(i + 1);
      questions[i].load();
      questions[i].ask_a_question();
      questions[i].check();
      score_sum += questions[i].getScore();
   }
   std::cout << "Koniec. Zdobyte punkty: " << score_sum << "\n";
}