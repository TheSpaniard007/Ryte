#include<stdio.h>

 int main()
{ char ch;
  int a;
  printf("Enter a character:");
  scanf("%c",&ch);
  a=(int)ch;
  if(a>64 && a<91 || a>96 && a<123)
  { printf("Character provided is Alphabet\n");
    if(a>96 && a<123)
    { printf("It is small case alphabet\n");
      if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
      { printf("The character is a vowel");
	  }	
	  else
	  {printf("The character is a consonant\n");
	  }
    }
    else
    { printf("It is upper case alphabet");
	}
  }
    else if(a>47 && a<58)
    {printf("It is digit");
	}
	else
	{ printf("Its a special character");
	}
	return 0;
}
