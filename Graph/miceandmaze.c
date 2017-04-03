#include<stdio.h>
int main(){
	int ver,exit,timereq,n,second,first,time,mat[1003][104],i,j,k;	
        int temp = 1000000;
	scanf("%d",&ver);
	scanf("%d",&exit);
	scanf("%d",&timereq);
	scanf("%d",&n);
	for(i=1;i<=ver;i++){
                for(j=1;j<=ver;j++){
                        mat[i][j] = 1000000;
                                }
                }
	

	while(n--){
		
		scanf("%d%d%d",&first,&second,&time);
		mat[first][second] = time;
		}
	
/*	for(i=1;i<=ver;i++){
		for(j=1;j<=ver;j++){
			printf("%d  ",mat[i][j]);
				}
			printf("\n");
		}*/
	int count =0;
	for(k = 1;k<=ver;k++){
		for(i=1;i<=ver;i++){
			for(j=1;j<=ver;j++){
				if(mat[i][j] > mat[i][k] + mat[k][j])
					mat[i][j] = mat[i][k] + mat[k][j];
					}
				}
		}

	for(i=1;i<=ver;i++){
		if(mat[i][exit] + mat[exit][i] < temp){
		temp = mat[i][exit] + mat[exit][i] ;
			}
		}
	printf("%d\n",temp);	
	return 0;
}



                


