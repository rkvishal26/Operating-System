#include <stdio.h>
#include<math.h>

int main(){
	int limit;
	int current;
    int n;
	int temp=0;
	printf("Enter limit of the queue(i.e; total size 0f the cylinder -1)=\n");
	scanf("%d", &limit);
    printf("Enter the current head position =\n");
    scanf("%d", &current);
	printf("Enter the size of the queue request=\n");
    scanf("%d", &n);
    int arr[n];
	//int arr[n] = {82,170,43,140,24,16,190}; // for static input
	
  
     printf("Enter the queue request\n:");
  // taking input and storing it in an array
       for(int i = 0; i <n; ++i) {
             scanf("%d", &arr[i]); // complexcity=O(n)
            }

        printf("Queue request are:\n ");

         // printing elements of an array
        for(int i = 0; i < n; ++i) {
     		printf("%d\n", arr[i]);// complexcity=O(n)
		  				}
    for(int i=0;i<n;i++)
	 {		
	   for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])                // compexity for this nested loop =O(n^2)
			{
			    temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
   		}
	}

	int result = abs((limit - current) + (limit - arr[0]));
	printf("The total distance (in cylinders)that the disk arm moves=");
	printf("%d",result);
	
}
// Overall Complexcity will be= n + n + n^2 
                            //=2n+n^2
                            //=n^2
    //complexcity for the following code= O(n^2)
