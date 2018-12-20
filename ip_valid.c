int is_valid_ip(const char * addr) {
    int dp(int num,int place);
    char prev = ' ';
    int sum = 0,below255 =0,dotcount = 0,place =3;
    for (int i = strlen(addr)-1; i >=0; i --){
      if (addr[i] == '.'){
        if (sum<=255){
          below255++;
        }
        dotcount++;
        sum = 0;
        place =3;
      }
      if (addr[i]!= '.'){

      
      sum +=dp(addr[i]-'0',place);
      
      place--;
      }
    if (i == strlen(addr)-1 && sum <=255){

      below255++;
    }
    if (addr[i] == '-'|| addr[i] ==' '){
      return 0;
    }
    if (addr[i] == '.'&& prev-'0' == 0){
      return 0;
      }
    
    if (sum >255){
      return 0;
    }
    prev = addr[i];
    }
    return (dotcount == 3&&below255 ==4);
};

int dp(int num,int place){
  if (num ==0){
    return 0;
  }
  else if (place ==3){
    return num;
  }
  else if (place ==2){
      return num*10;
    }
    

  else if (place==1){
    return num *100;
  }
}
