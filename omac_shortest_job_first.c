
int TASK[6] = {8,9,10,11,12,13};

int taskTime0[6]={10,5,8,3,1,2};
int taskTime1[6]={10,5,8,3,1,2};


  void setup()
{
   for(int i = 0; i <6; i++){
     pinMode(TASK[i], OUTPUT);
   }
}
void sort(){
  int temp;
	for(int i=0;i<6;i++)
	{		
		for(int j=i+1;j<6;j++)
		{
			if(taskTime1[i]>taskTime1[j])
			{
				temp  = taskTime1[i];
				taskTime1[i]= taskTime1[j];
				taskTime1[j]=temp;
			}
		}
	}
}
void sjf(){
  	for(int i=0;i<6;i++)
	{		
		for(int j=0;j<6;j++)
		{
			if(taskTime1[i]==taskTime0[j])
			{
				digitalWrite(TASK[j], HIGH);
  delay(taskTime0[j]*1000); // Wait for 1000 millisecond(s)
  digitalWrite(TASK[j], LOW);
    
			}
		}
	}
    
  
}

void loop()
{
  sort();
  sjf();
  exit(0);
}