int TASK[6] = {8,9,10,11,12,13};


int taskTime[6]={10,5,8,3,1,2};

  void setup()
{
   for(int i = 0; i <6; i++){
     pinMode(TASK[i], OUTPUT);
   }
}
void fifo(){
  for(int i = 0; i <6; i++){
  	digitalWrite(TASK[i], HIGH);
  delay(taskTime[i]*1000); // Wait for 1000 millisecond(s)
  digitalWrite(TASK[i], LOW);
  }
}

void loop()
{
  fifo();
  exit(0);
}