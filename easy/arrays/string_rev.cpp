//reverse a string

string reverseWord(string str){
  int length = str.size();
  for(int i=0;i<length/2;i++){
    swap(str[i],str[length-i-1]);
  }
  return str;
}