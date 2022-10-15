#include<stdio.h>
#include<stdlib.h> 
#include<conio.h>
#define max 8 

//max memiliki nilai 8setelah diisi pada line 3 , top saya rubah dari function menjadi inisialisasi biasa agar lebih efisien  
int stack[8],choice,n,x,i;
int data;
int top = -1; 
int count = 0;
int arr[8];

void SelectionSort(int arr[], int k, int j, int length, int flag)
{
    if (k < length - 1) {
        if (flag == 1)
            j = k + 1;

        if (j < length) {
            if (arr[k] > arr[j]) //proses penyortingan
            {
                arr[k] = arr[k] + arr[j];
                arr[j] = arr[k] - arr[j];
                arr[k] = arr[k] - arr[j];
            }
            SelectionSort(arr, k, j + 1, length, 0);
        }
        SelectionSort(arr, k + 1, 0, length, 1);
    }
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

int DISPLAY(int stack[]){
	printf(" Isi Stack Elements: \n");
  	if(ISEMPTY()) {
     printf("\n Stack Kosong\n");
   }else{
   	for(i=top;i>=0;--i)
   		printf(" %d ",stack[i]);
   }
   printf("\n");
   	
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
	count++;   
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
		count--;   		
	}
    return data;
}
int CLEAR()
{
	
stack[max]=top=-1;
printf(" Data clear\n\n");

}

int main()
{
int stack[8],choice,n,x,i,item;
int data;
int top = -1; 
	do
    {
	printf(" ========================================================\n");
	printf(" ||>>>>>>>>>>>>>>>>  UTS STRUKTUR DATA  <<<<<<<<<<<<<<<||\n");
	printf(" ========================================================\n");
	printf(" +------------------------------+-----------------------+\n");
	printf(" |\t\tNPM\t\t|\tNAMA\t\t|\n");
	printf(" +------------------------------+-----------------------+\n");
	printf(" |\tAlfian Dorif Murtadlo\t|\t20081010251\t|\n");
	printf(" |\tDaffa Tungga Wisesa\t|\t21081010243\t|\n");
	printf(" |\tMuhamad Rizal Efendi\t|\t21081010035\t|\n");	
	printf(" +------------------------------+-----------------------+\n\n");
	printf(" ========================================================\n");
	DISPLAY(stack);

 		// print stack data 
   		while(top != -1) {
      	int data = POP(stack);
      	printf("%d\n",data);
   	}
	printf(" ========================================================\n");
    printf(" ||>>>>>>>>>>>>>>>  Pilih Operasi Stack  <<<<<<<<<<<<<<||\n");
    printf(" ========================================================\n");
    printf("\n 1.ISEMPTY \n 2.ISFULL\n 3.PUSH\n 4.POP\n 5.CLEAR\n 6.DISPLAY\n 7.EXIT\n\n");
    printf(" --------------------------------------------------------\n");
    printf(" Masukkan Pilihan : "); scanf("%d",&choice);
    printf(" ========================================================\n");
        switch(choice)
        {
            case 1:
            {
            	printf(" Stack empty: %s\n" , ISEMPTY()?"true":"false");
				getch(); system("cls");
                break;
            }
		    case 2:
            {
                printf(" Stack full: %s\n" , ISFULL()?"true":"false");
                getch(); system("cls");
                break;
            }
		    case 3:
            {
				printf(" Masukkan Variable PUSH : ");
            	scanf("%d",&i);
            	PUSH(stack,i);
   				
   				for (int l = 0; l <= count; l++)
       			arr[l]=stack[l];
    			int k = 0;
				DISPLAY(stack);
    			SelectionSort(arr, 0, 0, count, 1);

    			printf("\n Data sesudah sorting: \n");
    			for (k = 0; k < count; k++)
       			printf(" %d ", arr[k]);
       			
   				getch(); system("cls");
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
				getch(); system("cls");
                break;
            }
            case 5:
            {
                CLEAR();
                printf(" Elements: \n");

 				// print stack data 
   				while(!ISEMPTY()) {
      			int data = POP(stack);
      			printf("%d\n",data);
   				}
				getch(); system("cls");			
                break;
            }
            case 6:
            {
                DISPLAY(stack);
                getch(); system("cls");
                break;
            }
            case 7:
            {
                printf("\n Exiting...");
                break;
            }	
            default:
            {
                printf ("\n Masukkan Pilihan Yang Valid Bu(1/2/3/4/5/6)");
                getch(); system("cls");
            }
                 
        }
    }
    while(choice!=7);




    return 0;
}

