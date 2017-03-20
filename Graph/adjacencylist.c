#include<stdio.h>
#include <stdlib.h>
struct node{
int vertices;
struct node  *next;
};
int main(){
	int i,j,n;
	char res,temp;
	struct node *c,*p,*adj_list[10] = {NULL};
	
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if ( i == j )
				continue;
			printf("Is there any edges b/w %d and %d",i,j);
					
			scanf(" %c",&res);
			
			if(res == 'y'){
				c = (struct node *)malloc(sizeof(struct node));
				c ->vertices = j;
				c -> next = NULL; 	
				if(adj_list[i] == NULL){
					adj_list[i] = c;
				}
				else{
					p = adj_list[i];

					while(p->next != NULL){

						p = p->next;
					}
					p->next = c;
					printf("%d -- \n",(p->next)->vertices);
				   }

				}

			}
		}
	
	for(i=1;i<10;i++){
		printf("%d --- > ",i);
		p = adj_list[i];
		while(p != NULL ){
			printf("%d ",p->vertices);
			p=p->next;
			
			}
			printf("\n");
		}


return 0;
}
