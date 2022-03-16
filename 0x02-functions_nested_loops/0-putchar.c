  #include "main.h"

  /** 
   * main - prints _putchar
   * Return: Always 0 (Success) 
   */
  int main(void)
  {	
         char *c = "_putchar";	

         while (*c != '\0')
         {
                _putchar(*c);
                c++;
         }
         _putchar('\n');

          return (0);
  }
