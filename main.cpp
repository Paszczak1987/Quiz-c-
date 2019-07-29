#include <iostream>
#include "pytanie.cpp"

int main()
{
   Question p[5];
   int score_sum = 0;
   for (int i = 0; i < 5; i++)
   {
      p[i].question_nr = i + 1;
      p[i].load();
      p[i].ask_a_question();
      p[i].check();
      score_sum += p[i].score;
   }

   std::cout << "Koniec. Zdobyte punkty: " << score_sum << "\n";

   return 0;
}