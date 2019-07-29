#include <iostream>

class Question
{
public:
   int question_nr;
   int score = 0;
   std::string content;
   std::string a, b, c, d;
   std::string correct;
   std::string answer;

   void load();
   void ask_a_question();
   void check();
};