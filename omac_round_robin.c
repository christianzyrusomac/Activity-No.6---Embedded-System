int TASK[6] = {8,9,10,11,12,13};


int taskTime[6]={10,5,8,3,1,2};

int timeSlice = 1;
  int sum = 0;
  void setup()
{
   for(int i = 0; i <6; i++){
     pinMode(TASK[i], OUTPUT);
   }
}



void RoundRobin(){
  
   
 for(int i = 0;;){
  		if(taskTime[i]>0){
            
          taskTime[i] = taskTime[i] - timeSlice;
    	digitalWrite(TASK[i], HIGH);
  		delay(timeSlice*1000); 
   		digitalWrite(TASK[i], LOW); 
   		delay(timeSlice*500);
    	for(int x = 0; x < 6; x++){
     sum = sum + taskTime[x];
   } 
   
        }
  
     i++;
    if(i >= 6){
    	i=0;
    }
    if(sum==0){
    break;
    }
  
  }
 
}

void loop()
{
  RoundRobin();
  
}
