/*Q.3 Transpose of 2D Array
Develop a Program to find the transpose matrix of a given 2D array.
Example:
Input:
Enter the array's row & column size: 3
Enter array's elements:

a[0][0] = 2
a[0][1] = 4
a[0][2] = 1
a[1][0] = 3
a[1][1] = 5
a[1][2] = 4
a[2][0] = 8
a[2][1] = 2
a[2][2] = 6
Output:
The transpose matrix of an array:
2 3 8
4 5 2
1 4 6 */
#include<stdio.h>
int main(){
	


int row,column,i,j,transpose;
	printf("Enter the number of row:");
	scanf("%d",&row);
    	printf("Enter the numbrt of column:");
	scanf("%d",&column);
int y[row][column],x[row][column];
printf("enter the array elements:\n");
for(i=0;i<row;i++){
	for(j=0;j<column;j++){
		printf("a[%d][%d]=:",i,j,transpose);
		scanf("%d",&y[i][j]);
	}
	
}
for(i=0;i<row;i++){
	for(j=0;j<column;j++){
		x[j][i]=y[i][j];
	}
}
for(i=0;i<row;i++){
	for(j=0;j<column;j++){
		printf("%d",x[i][j]);
	}
	printf("\n");
}
}






