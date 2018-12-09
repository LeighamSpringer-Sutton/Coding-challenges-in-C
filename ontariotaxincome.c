#include <stdio.h>

int main()
{
    float salary,payableT,net,input=1;
    void calc(float input);
    while (input!=0){
        printf("\nPlease enter your annual Salary or Enter 0 to quit >");
        scanf("%f",&input);
        if (input ==0){
            printf("\nThanks and bye!");
            break;
        }
        calc(input);
    }
    return 0;
}



void calc(float input)
{
    if (input <=10000 && input>0){
        printf("-------------------------------------------------");
        printf("\nYour annual net income is: $%.2f\n",input);
        printf("\nYour total payable tax is: $%d\n",0);
        printf("\nAnd your monthly net income is: $%.2f\n",input/12);
        printf("-------------------------------------------------");
    }
    else if (input>10000 && input <=25000){
        printf("-------------------------------------------------");
        printf("\nYour annual net income is: $%.2f\n",(input*0.83));
        printf("\nYour total payable tax is: $%f\n",input*0.17);
        printf("\nAnd your monthly net income is: $%.2f\n",(input*0.83)/12);
        printf("-------------------------------------------------");
    }
    else if (input >25000 && input <=44000){
        printf("-------------------------------------------------");
        printf("\nYour annual net income is: $%.2f\n",(input*0.77));
        printf("\nYour total payable tax is: $%f\n",input*0.23);
        printf("\nAnd your monthly net income is: $%.2f\n",(input*0.77)/12);
        printf("-------------------------------------------------");
    }
    else if (input >44000 && input <=86000){
        printf("-------------------------------------------------");
        printf("\nYour annual net income is: $%.2f\n",(input*0.73));
        printf("\nYour total payable tax is: $%f\n",input*0.27);
        printf("\nAnd your monthly net income is: $%.2f\n",(input*0.73)/12);
        printf("-------------------------------------------------");
    }
    else if (input >86000 && input <=120000){
        printf("-------------------------------------------------");
        printf("\nYour annual net income is: $%.2f\n",(input*0.69));
        printf("\nYour total payable tax is: $%f\n",input*0.31);
        printf("\nAnd your monthly net income is: $%.2f\n",(input*0.69)/12);
        printf("-------------------------------------------------");
    }
    else if (input >120000){
        printf("-------------------------------------------------");
        printf("\nYour annual net income is: $%.2f\n",(input*0.65));
        printf("\nYour total payable tax is: $%f\n",input*0.35);
        printf("\nAnd your monthly net income is: $%.2f\n",(input*0.65)/12);
        printf("-------------------------------------------------");
    }
    else if(input<0){
        printf("-------------------------------------------------");
        printf("\nInvalid input. Please enter a number salary greater than 0.\n");
        printf("-------------------------------------------------");
        
    }
}