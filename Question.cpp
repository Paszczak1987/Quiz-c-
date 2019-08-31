#include "Question.h"

#include <iostream>
#include <fstream>

void Question::load()
{
   std::fstream file;
   file.open("quiz.txt", std::ios::in);

   if (file.good() == false)
   {
      std::cout << "Nie udalo sie otworzyc pliku.\n";
      exit(0);
   }

   int actual_nr = 1;
   int line_nr = (question_nr - 1) * 6 + 1;

   std::string line;

   while (std::getline(file, line))
   {
      if (actual_nr == line_nr)
         content = line;
      if (actual_nr == line_nr + 1)
         a = line;
      if (actual_nr == line_nr + 2)
         b = line;
      if (actual_nr == line_nr + 3)
         c = line;
      if (actual_nr == line_nr + 4)
         d = line;
      if (actual_nr == line_nr + 5)
         correct = line;

      actual_nr++;
   }
   file.close();
}

void Question::ask_a_question()
{
   std::cout << content << "\n";
   std::cout << a << "\n";
   std::cout << b << "\n";
   std::cout << c << "\n";
   std::cout << d << "\n";
   std::cout << "Odpowiedz: ";
   std::cin >> answer;
   answer = tolower(answer[0]);
}

void Question::check()
{
   if (answer == correct)
   {
      score = 1;
   }
   else
   {
      score = 0;
   }
}
void Question::setQuestionNr(int nr)
{
   question_nr = nr;
}
int Question::getScore()
{
   return score;
}