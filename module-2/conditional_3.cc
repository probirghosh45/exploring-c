#include<stdio.h>

int main(){
   int rent;
   scanf("%d",&rent);

  if (rent>=1000)
  {
    printf("আমরা Uber এ ঘুরবো পুরো Dhaka City🤗!!!\n");
    if (rent>=1500)
    {
      printf("তারপর Basis Expo 2023 এ যাবো 🥰!!!");
    }
    else{
       printf("তারপর ঢাকেশ্বরী মন্দিরে যাবো🎯 ও পূজা দিয়ে বাড়ি চলে আসবো🙏!!!");
    }
    
  }
  else if (rent>=300)
  {
    printf("OBHAI ডাকমু😎");
  }

  else{
    printf("ওভাই,উবার Pathao😀!!!");
  }

    return 0;
}