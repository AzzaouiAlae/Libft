#include "../tests.h"

void test_strlen(void)
{
  // arrange
  char *str[] = {"", "a", "hello", "hello world", "hello\nworld", "hello\0world",
                 "Générer une routine dentraînement pour les débutants Copilot utilise lIA. Recherchez les erreurs. Conditions(suvre dans un nouvel onglet)Confidentialité(souvre dans un nouvel onglet)FAQ(souvre dans un ouvel onglet)VousEnvoyé par vous :i want test cases for strlen i need test not code", "hello\0\0world", 0};
  int exp = 0;
  int act = 0;
  int i = 0;
  // act
  while (str[i])
  {
    act = ft_strlen(str[i]);
    exp = strlen(str[i]);
    // assert
    TEST_ASSERT_EQUAL_INT64(exp, act);
    i++;
  }
}

void test_strlen_NULL(void)
{
  char *s = NULL;
  size_t n = ft_strlen(s);
}