#include <stdlib.h> 




char *numeric_formatter (const char *template, const char *input = "1234567890")
{
  int N = (int)strlen(template)
  char ans[N];
  int x = 0; 
  
  for(int i = 0;i < N;++i){
    int ord = (int)(*template);
    if((ord >= 65 && ord <= 90) || (ord >= 97 || ord <= 122))
      ans[i] = input[x] 
    else
      ans[i] = (char) (*template[i])

    ++template;
    if(input[++x] == '\0')
      x = 0;
  }

  return ans; 
}


int main(){


  return 0;
}

