#include <stdio.h>
#include <string.h>

int main() {
    int i = 0;
    char icode[20][30], opr[20], str[10];

    printf("Enter the code (If you want to terminate enter exit)\n");
    
    // Use a while loop with a condition checking inside the loop
    while (strcmp(icode[i], "exit") != 0) {
        scanf("%s", icode[i]);
        // Check for exit condition inside the loop
        if (strcmp(icode[i], "exit") == 0) {
            break; // exit the loop
        }
        i++;
    }

    i = 0;
    printf("\nTarget code generation");
    printf("\n************************");

    do {
        strcpy(str, icode[i]);
        switch (str[3]) {
        case '+':
            strcpy(opr, "ADD");
            break;
        case '-':
            strcpy(opr, "SUB");
            break;
        case '*':
            strcpy(opr, "MUL");
            break;
        case '/':
            strcpy(opr, "DIV");
            break;
        }

        printf("\n\tMov %c,R%d", str[2], i);
        printf("\n\t%s %c,R%d", opr, str[4], i);
        printf("\n\tMov R%d,%c", i, str[0]);

        
        
    } while (strcmp(icode[i++], "exit") != 0);

    return 0;
}
