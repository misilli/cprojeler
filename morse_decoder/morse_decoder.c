#include <stdlib.h>
#include <stdio.h>

const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

int	ft_strcmp(const char *s1,const char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && (s1[x] != '\0' || s2[x] != '\0'))
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

char *decode_morse(const char* morse_code) {
  int i = 0;
  int j = 0;
  int a = 0;
  int check = 0;
  int size = 1;
  char temp[8];
  char ans = (char*)malloc(200 * sizeof(char));
  
  while(morse_code[i])
  { 

    while(morse_code[i] != ' '&& check == 0)
    {
      while (morse_code[i] != ' ')
      {
        temp[j] = morse_code[i];
        i++;
        j++;
      }
      check = 1;
    }
    check = 1;
    temp[j] = '\0';
    if (ft_strcmp(morse[a],temp) == 0)
    {
        ans[size] = *ascii[a];
        check = 0;
        size ++;
        i++;
        j = 0;
        printf("%d",ans[size]);
    }
    a ++;
  }
  return (ans);
}

int main()
{
    printf("%s",decode_morse(".... . -.--   .--- ..- -.. ."));
}
