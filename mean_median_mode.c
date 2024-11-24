#include<stdio.h>
int main()
{ int arr[]={2,5,7,8,4,6,7,6,7,6,7,6,7,5,5,5,5,5,5,5,5,7,7,7,7};
  int i,j,count,max_count=0,mode_count;
  float mean;
  float sum=0;
  
  int n=sizeof(arr)/sizeof(arr[0]);
  int mode[n];
  int min;
  for(i=0;i<n-1;i++)
  { min=i;
    for(j=i+1;j<n;j++)
    { 
       if(arr[j]<arr[min])
       {
            min=j;
       }
    }
    int temp=arr[i];
    arr[i]=arr[min];
    arr[min]=temp;
  }
  for(i=0;i<n;i++)
  {
    printf("%d ",arr[i]);
  }
  for(i=0;i<n;i++)
  {
    sum+=arr[i];
  }
  mean=sum/n;
  printf("\nMean= %.3f\n",mean);

   if(n%2!=0)
   { 
       int b=arr[n/2];
      printf("Median= %d\n",b);
    
    }
    else
    {  float a=(float)(arr[n/2-1]+arr[n/2])/2;
       printf("Median= %.3f\n",a);
    }
    printf("Mode= ");
for(i=0;i<n;i++)
{ count=1;
  for(j=i+1;j<n;j++)
  {
    if(arr[i]==arr[j])
    { count++;
     
    }
    else
    {
      break;
    }
  }
if(count>max_count)
{ 
  max_count=count;
  mode_count=0;
   mode[mode_count++]=arr[i];
}
else if(count==max_count)
{ mode[mode_count++]=arr[i];
  
}

  i+=count-1;
}


if(max_count==1)
{ printf(" No mode");
}
else{
for(i=0;i<mode_count;i++)
{
    printf(" %d ",mode[i]);
}
}

printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
  return 0;
}
