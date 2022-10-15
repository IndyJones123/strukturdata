#include<stdio.h>
#include<stdlib.h> 
#define max 8 

//max memiliki nilai 8setelah diisi pada line 3 , top saya rubah dari function menjadi inisialisasi biasa agar lebih efisien  
int stack[8],choice,n,x,i;
int data;
int top = -1; 

int DISPLAY(int stack[]){
	printf("Isi Stack Elements: \n");
  	if(ISEMPTY()) {
     printf("\n Stack Kosong\n");
   }else{
   	for(i=top;i>=0;--i)
   		printf("\n %d",stack[i]);
   }
   printf("\n");
}

int ISEMPTY()
{
if (top == -1){
	return 1;		
	}

	else{
	
	return 0;
	
	}	
	

}

int ISFULL()
{
    if(top==7)
    {
        return 1;
         
    }
    else
    {

		return 0;
    }
}

int PUSH(int stack[],int i){

   if(top==(max-1)){;
    printf("Tidak Bisa Menambahkan Data STACK full.\n");
   } else {
	++top;   
    stack[top] = i;
   }
}
int POP(int stack[]) {
	int data;
	if(top==-1){
	data=0;
	}else{
		data = stack[top];
    	--top;   		
	}
    return data;
}
int CLEAR()
{
	
stack[max]=top=-1;
printf("Data clear\n\n");

}

int main()
{
int stack[8],choice,n,x,i,item;
int data;
int top = -1; 
	
	printf("Alfian Dorif Murtadlo\n");
	printf("20081010251\n\n");
	DISPLAY(stack);

 		// print stack data 
   		while(top != -1) {
      	int data = POP(stack);
      	printf("%d\n",data);
   }

    printf("\n Pilih Operasi Stack Menggunakan Array");
    printf("\n 1.ISEMPTY \n 2.ISFULL\n 3.PUSH\n 4.POP\n 5.CLEAR\n 6.DISPLAY\n 7.EXIT\n");
    do
    {
        printf("\n Masukkan Pilihan Operasi Bu : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
            	printf("Stack empty: %s\n" , ISEMPTY()?"true":"false");

                break;
            }
		    case 2:
            {
                printf("Stack full: %s\n" , ISFULL()?"true":"false");
                break;
            }
		    case 3:
            {
				printf("Masukkan Variable PUSH : ");
            	scanf("%d",&i);
            	PUSH(stack,i);
   				DISPLAY(stack);
                break;
            }
            case 4:
            {
				item = POP(stack);
				if(item==0){
					printf("\n Stack Kosong\n");
				}else{
					DISPLAY(stack);
				}
                break;
            }
            case 5:
            {
                CLEAR();
                printf("Elements: \n");

 				// print stack data 
   				while(!ISEMPTY()) {
      			int data = POP(stack);
      			printf("%d\n",data);
   }
                break;
            }
            case 6:
            {
                DISPLAY(stack);
                break;
            }
            case 7:
            {
                printf("\nExiting...");
                break;
            }
            default:
            {
                printf ("\n Masukkan Pilihan Yang Valid Bu(1/2/3/4/5/6)");
            }
                 
        }
    }
    while(choice!=7);
    return 0;
}

