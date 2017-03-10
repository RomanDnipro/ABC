/**
 * 1 Принять строку- аргумент командной строки
 * 2 Проверить количество аргументов(должно быть 2)
 * 3 Проверка на буквы. Если символ является буквой- напечатать её матрицу, если нет- вывести соответствующее сообщение
 * 4 Вывести на экран: матрицы(10х10) всех букв из полученной строки(выводится изображение буквы в верхнем регистре, 
 * даже если получена буква в нижнем регистре)
 */

#include <stdio.h>
//#include <stdlib.h>
#include <stdbool.h>

//проверяет- является ли символ буквой
bool isAlpha(char letter);

//в зависимости от текущего символа- вызывает соответстующую функцию
void draw(char letter);

int main(int argc, char* argv[]){
    int status = 0;
    
    //проверка на количество аргументов
    if(argc != 2){ 
        printf("Usage: alphabet word  (should enter 1 argument)\n\n");
        status = 1;
        return status;
    }
        
    //проверка на букву, если да- печатаем её матрицу,
    //если нет- выводим соответствующее сообщение
    int i = 0;
    while(argv[1][i] != '\0'){
        if(isAlpha(argv[1][i])){
            draw(argv[1][i]);
        }else{
            printf("'%c' is not a letter\n\n", argv[1][i]);
        }
        i++;
    }
    return status;
}

bool isAlpha(char letter){
    bool status = false;
    if(letter > 64 && letter < 91){
        status = true;
    } else if(letter > 96 && letter < 123){
        status = true;
    }
    return status;
}

void printA(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    matrix[0][4] = 'A';
    matrix[0][5] = 'A';
    matrix[1][4] = 'A';
    matrix[1][5] = 'A';

    matrix[2][3] = 'A';
    matrix[2][6] = 'A';
    matrix[3][3] = 'A';
    matrix[3][6] = 'A';

    matrix[4][2] = 'A';
    matrix[4][7] = 'A';
    matrix[5][2] = 'A';
    matrix[5][3] = 'A';
    matrix[5][4] = 'A';
    matrix[5][5] = 'A';
    matrix[5][6] = 'A';
    matrix[5][7] = 'A';

    matrix[6][1] = 'A';
    matrix[6][8] = 'A';
    matrix[7][1] = 'A';
    matrix[7][8] = 'A';

    matrix[8][0] = 'A';
    matrix[8][9] = 'A';
    matrix[9][0] = 'A';
    matrix[9][9] = 'A';
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printB(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    matrix[0][1] = 'B';
    matrix[0][2] = 'B';
    matrix[0][3] = 'B';
    matrix[0][4] = 'B';
    matrix[0][5] = 'B';

    matrix[1][1] = 'B';
    matrix[1][7] = 'B';

    matrix[2][1] = 'B';
    matrix[2][8] = 'B';

    matrix[3][1] = 'B';
    matrix[3][7] = 'B';

    matrix[4][1] = 'B';
    matrix[4][2] = 'B';
    matrix[4][3] = 'B';
    matrix[4][4] = 'B';
    matrix[4][5] = 'B';

    matrix[5][1] = 'B';
    matrix[5][7] = 'B';

    matrix[6][1] = 'B';
    matrix[6][8] = 'B';

    matrix[7][1] = 'B';
    matrix[7][8] = 'B';

    matrix[8][1] = 'B';
    matrix[8][7] = 'B';

    matrix[9][1] = 'B';
    matrix[9][2] = 'B';
    matrix[9][3] = 'B';
    matrix[9][4] = 'B';
    matrix[9][5] = 'B';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printC(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    matrix[0][3] = 'C';
    matrix[0][4] = 'C';
    matrix[0][5] = 'C';
    matrix[0][6] = 'C';

    matrix[1][2] = 'C';
    matrix[1][7] = 'C';

    matrix[2][1] = 'C';
    matrix[2][8] = 'C';
    matrix[3][1] = 'C';

    matrix[4][0] = 'C';

    matrix[9][3] = 'C';
    matrix[9][4] = 'C';
    matrix[9][5] = 'C';
    matrix[9][6] = 'C';

    matrix[8][2] = 'C';
    matrix[8][7] = 'C';

    matrix[7][1] = 'C';
    matrix[7][8] = 'C';

    matrix[6][1] = 'C';

    matrix[5][0] = 'C';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printD(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }

    matrix[0][1] = 'D';
    matrix[0][2] = 'D';
    matrix[0][3] = 'D';
    matrix[0][4] = 'D';

    matrix[1][1] = 'D';
    matrix[1][6] = 'D';

    matrix[2][1] = 'D';
    matrix[2][7] = 'D';

    matrix[3][1] = 'D';
    matrix[3][8] = 'D';

    matrix[4][1] = 'D';
    matrix[4][9] = 'D';

    matrix[9][1] = 'D';
    matrix[9][2] = 'D';
    matrix[9][3] = 'D';
    matrix[9][4] = 'D';

    matrix[8][1] = 'D';
    matrix[8][6] = 'D';

    matrix[7][1] = 'D';
    matrix[7][7] = 'D';

    matrix[6][1] = 'D';
    matrix[6][8] = 'D';

    matrix[5][1] = 'D';
    matrix[5][9] = 'D';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printE(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }

    matrix[0][1] = 'E';
    matrix[0][2] = 'E';
    matrix[0][3] = 'E';
    matrix[0][4] = 'E';
    matrix[0][5] = 'E';
    matrix[0][6] = 'E';
    matrix[0][7] = 'E';
    matrix[0][8] = 'E';
    matrix[0][9] = 'E';

    matrix[1][1] = 'E';

    matrix[2][1] = 'E';

    matrix[3][1] = 'E';

    matrix[4][1] = 'E';
    matrix[4][2] = 'E';
    matrix[4][3] = 'E';
    matrix[4][4] = 'E';
    matrix[4][5] = 'E';
    matrix[4][6] = 'E';
    matrix[4][7] = 'E';
    matrix[4][8] = 'E';
    matrix[4][9] = 'E';

    matrix[5][1] = 'E';

    matrix[6][1] = 'E';

    matrix[7][1] = 'E';

    matrix[8][1] = 'E';

    matrix[9][1] = 'E';
    matrix[9][2] = 'E';
    matrix[9][3] = 'E';
    matrix[9][4] = 'E';
    matrix[9][5] = 'E';
    matrix[9][6] = 'E';
    matrix[9][7] = 'E';
    matrix[9][8] = 'E';
    matrix[9][9] = 'E';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printF(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }

    matrix[0][1] = 'F';
    matrix[0][2] = 'F';
    matrix[0][3] = 'F';
    matrix[0][4] = 'F';
    matrix[0][5] = 'F';
    matrix[0][6] = 'F';
    matrix[0][7] = 'F';
    matrix[0][8] = 'F';
    matrix[0][9] = 'F';

    matrix[1][1] = 'F';

    matrix[2][1] = 'F';

    matrix[3][1] = 'F';

    matrix[4][1] = 'F';
    matrix[4][2] = 'F';
    matrix[4][3] = 'F';
    matrix[4][4] = 'F';
    matrix[4][5] = 'F';
    matrix[4][6] = 'F';
    matrix[4][7] = 'F';
    matrix[4][8] = 'F';
    matrix[4][9] = 'F';

    matrix[5][1] = 'F';

    matrix[6][1] = 'F';

    matrix[7][1] = 'F';

    matrix[8][1] = 'F';
    
    matrix[9][1] = 'F';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printG(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    matrix[0][3] = 'G';
    matrix[0][4] = 'G';
    matrix[0][5] = 'G';
    matrix[0][6] = 'G';

    matrix[1][2] = 'G';
    matrix[1][7] = 'G';

    matrix[2][1] = 'G';
    matrix[2][8] = 'G';

    matrix[3][1] = 'G';

    matrix[4][0] = 'G';

    matrix[9][3] = 'G';
    matrix[9][4] = 'G';
    matrix[9][5] = 'G';
    matrix[9][6] = 'G';

    matrix[8][2] = 'G';
    matrix[8][7] = 'G';

    matrix[7][1] = 'G';
    matrix[7][5] = 'G';
    matrix[7][6] = 'G';
    matrix[7][7] = 'G';

    matrix[6][1] = 'G';

    matrix[5][0] = 'G';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printH(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    matrix[0][1] = 'H';
    matrix[0][8] = 'H';

    matrix[1][1] = 'H';
    matrix[1][8] = 'H';

    matrix[2][1] = 'H';
    matrix[2][8] = 'H';

    matrix[3][1] = 'H';
    matrix[3][8] = 'H';

    matrix[4][1] = 'H';
    matrix[4][2] = 'H';
    matrix[4][3] = 'H';
    matrix[4][4] = 'H';
    matrix[4][5] = 'H';
    matrix[4][6] = 'H';
    matrix[4][7] = 'H';
    matrix[4][8] = 'H';

    matrix[5][1] = 'H';
    matrix[5][8] = 'H';

    matrix[6][1] = 'H';
    matrix[6][8] = 'H';

    matrix[7][1] = 'H';
    matrix[7][8] = 'H';

    matrix[8][1] = 'H';
    matrix[8][8] = 'H';

    matrix[9][1] = 'H';
    matrix[9][8] = 'H';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printI(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 1; i < 9; i++){
        matrix[i][5] = 'J';
        if(i > 1){
            matrix[0][i] = 'J';
            matrix[9][i] = 'J';
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printJ(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    matrix[0][5] = 'J';

    matrix[1][5] = 'J';

    matrix[2][5] = 'J';

    matrix[3][5] = 'J';

    matrix[4][5] = 'J';

    matrix[5][5] = 'J';

    matrix[6][5] = 'J';

    matrix[7][5] = 'J';

    matrix[8][4] = 'J';
    matrix[8][1] = 'J';

    matrix[9][2] = 'J';
    matrix[9][3] = 'J';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printK(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        matrix[i][0] = 'K';
        if(i < 5){
            matrix[i][5 - i] = 'K';
        }
        if(i > 4){
            matrix[i][i - 4] = 'K';
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printL(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        matrix[i][0] = 'L';
        if(! (i > 4)){
            matrix[9][i + 1] = 'L';
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printM(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        matrix[i][0] = 'M';
        matrix[i][9] = 'M';
        if(i < 4){
            matrix[i + 1][i + 1] = 'M';
            matrix[i + 1][9 - i - 1] = 'M';
        }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printN(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        matrix[i][1] = 'N';
        matrix[i][8] = 'N';
        if(i > 0 && i < 9){
            matrix[i][i] = 'N';
        }
    }
    
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printO(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        if(i > 1 && i < 8){
            matrix[i][1] = 'O';
            matrix[i][8] = 'O';
        }
        if(i > 2 && i < 7){
            matrix[0][i] = 'O';
            matrix[9][i] = 'O';
        }
        matrix[1][2] = 'O';
        matrix[1][7] = 'O';
        matrix[8][2] = 'O';
        matrix[8][7] = 'O';
    }    

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printP(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        matrix[i][1] = 'P';
    }
    matrix[0][1] = 'P';
    matrix[0][2] = 'P';
    matrix[0][3] = 'P';
    matrix[0][4] = 'P';
    matrix[0][5] = 'P';

    matrix[1][7] = 'P';

    matrix[2][8] = 'P';

    matrix[3][7] = 'P';

    matrix[4][1] = 'P';
    matrix[4][2] = 'P';
    matrix[4][3] = 'P';
    matrix[4][4] = 'P';
    matrix[4][5] = 'P';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printQ(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        if(i > 1 && i < 8){
            matrix[i][1] = 'O';
            matrix[i][8] = 'O';
        }
        if(i > 2 && i < 7){
            matrix[0][i] = 'O';
            matrix[9][i] = 'O';
        }
        matrix[1][2] = 'O';
        matrix[1][7] = 'O';
        matrix[8][2] = 'O';
        matrix[8][7] = 'O';
        matrix[7][6] = 'O';
        matrix[9][8] = 'O';
    }  


    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printR(){
    char matrix[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            matrix[i][j] = ' ';
        }
    }
    
    for(int i = 0; i < 10; i++){
        matrix[i][1] = 'R';
    }
    matrix[0][1] = 'R';
    matrix[0][2] = 'R';
    matrix[0][3] = 'R';
    matrix[0][4] = 'R';
    matrix[0][5] = 'R';

    matrix[1][7] = 'R';

    matrix[2][8] = 'R';

    matrix[3][7] = 'R';

    matrix[4][1] = 'R';
    matrix[4][2] = 'R';
    matrix[4][3] = 'R';
    matrix[4][4] = 'R';
    matrix[4][5] = 'R';
    
    matrix[5][2] = 'R';
    matrix[6][3] = 'R';
    matrix[7][4] = 'R';
    matrix[8][5] = 'R';
    matrix[9][6] = 'R';

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printS(){
    
    char matrix[10][10]=
                       {{' ',' ','S','S','S','S','S','S',' ',' '},
                        {' ','S','S',' ',' ',' ',' ',' ','S',' '},
                        {' ','S',' ',' ',' ',' ',' ',' ','S',' '},
                        {' ','S',' ',' ',' ',' ',' ',' ',' ',' '},
                        {' ',' ','S','S','S','S','S',' ',' ',' '},
                        {' ',' ',' ','S','S','S','S','S',' ',' '},
                        {' ',' ',' ',' ',' ',' ',' ',' ','S',' '},
                        {' ','S',' ',' ',' ',' ',' ',' ','S',' '},
                        {' ','S',' ',' ',' ',' ',' ','S','S',' '},
                        {' ',' ','S','S','S','S','S','S',' ',' '}
        
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printT(){
    
    char matrix[10][10] = 
                   {{' ','T','T','T','T','T','T','T','T',' '},
                    {' ','T',' ',' ','T','T',' ',' ','T',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ',' ','T','T',' ',' ',' ',' '},
                    {' ',' ',' ','T','T','T','T',' ',' ',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printU(){
    
    char matrix[10][10] = 
                   {{' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U',' ',' ',' ',' ',' ',' ','U',' '},
                    {' ','U','U',' ',' ',' ',' ','U','U',' '},
                    {' ',' ','U','U',' ',' ','U','U',' ',' '},
                    {' ',' ',' ','U','U','U','U',' ',' ',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printV(){
    
    char matrix[10][10] = 
                   {{'V',' ',' ',' ',' ',' ',' ',' ',' ','V'},
                    {'V',' ',' ',' ',' ',' ',' ',' ',' ','V'},
                    {'V','V',' ',' ',' ',' ',' ',' ','V','V'},
                    {' ','V',' ',' ',' ',' ',' ',' ','V',' '},
                    {' ','V','V',' ',' ',' ',' ','V','V',' '},
                    {' ',' ','V',' ',' ',' ',' ','V',' ',' '},
                    {' ',' ','V','V',' ',' ','V','V',' ',' '},
                    {' ',' ',' ','V',' ',' ','V',' ',' ',' '},
                    {' ',' ',' ','V',' ',' ','V',' ',' ',' '},
                    {' ',' ',' ',' ','V','V',' ',' ',' ',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printW(){

    char matrix[10][10] = 
                   {{'W',' ',' ',' ',' ',' ',' ',' ',' ','W'},
                    {'W',' ',' ',' ',' ',' ',' ',' ',' ','W'},
                    {'W',' ',' ',' ',' ',' ',' ',' ',' ','W'},
                    {'W','W',' ',' ',' ',' ',' ',' ','W','W'},
                    {' ','W',' ',' ',' ',' ',' ',' ','W',' '},
                    {' ','W',' ',' ',' ',' ',' ',' ','W',' '},
                    {' ','W','W',' ','W','W',' ','W','W',' '},
                    {' ',' ','W',' ','W','W',' ','W',' ',' '},
                    {' ',' ','W','W',' ',' ','W','W',' ',' '},
                    {' ',' ',' ','W',' ',' ','W',' ',' ',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printX(){

    char matrix[10][10] = 
                   {{' ','X','X',' ',' ',' ',' ','X','X',' '},
                    {' ',' ','X',' ',' ',' ',' ','X',' ',' '},
                    {' ',' ','X',' ',' ',' ',' ','X',' ',' '},
                    {' ',' ','X',' ',' ',' ',' ','X',' ',' '},
                    {' ',' ',' ','X','X','X','X',' ',' ',' '},
                    {' ',' ',' ','X','X','X','X',' ',' ',' '},
                    {' ',' ','X',' ',' ',' ',' ','X',' ',' '},
                    {' ',' ','X',' ',' ',' ',' ','X',' ',' '},
                    {' ',' ','X',' ',' ',' ',' ','X',' ',' '},
                    {' ','X','X',' ',' ',' ',' ','X','X',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printY(){
    
        char matrix[10][10] = 
                   {{'Y','Y',' ',' ',' ',' ',' ',' ','Y','Y'},
                    {' ','Y','Y',' ',' ',' ',' ','Y','Y',' '},
                    {' ','Y','Y',' ',' ',' ',' ','Y','Y',' '},
                    {' ',' ','Y','Y',' ',' ','Y','Y',' ',' '},
                    {' ',' ',' ','Y',' ',' ','Y',' ',' ',' '},
                    {' ',' ',' ','Y','Y','Y','Y',' ',' ',' '},
                    {' ',' ',' ',' ','Y','Y',' ',' ',' ',' '},
                    {' ',' ',' ',' ','Y','Y',' ',' ',' ',' '},
                    {' ',' ',' ',' ','Y','Y',' ',' ',' ',' '},
                    {' ',' ',' ',' ','Y','Y',' ',' ',' ',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void printZ(){

        char matrix[10][10] =
                   {{' ','Z','Z','Z','Z','Z','Z','Z','Z',' '},
                    {' ','Z','Z',' ',' ',' ',' ','Z','Z',' '},
                    {' ',' ',' ',' ',' ',' ','Z','Z',' ',' '},
                    {' ',' ',' ',' ',' ','Z','Z',' ',' ',' '},
                    {' ',' ','Z','Z','Z','Z','Z','Z',' ',' '},
                    {' ',' ','Z','Z','Z','Z','Z','Z',' ',' '},
                    {' ',' ',' ','Z','Z',' ',' ',' ',' ',' '},
                    {' ',' ','Z','Z',' ',' ',' ',' ',' ',' '},
                    {' ','Z','Z',' ',' ',' ',' ','Z','Z',' '},
                    {' ','Z','Z','Z','Z','Z','Z','Z','Z',' '}
    };

    for(int i = 0; i < 10; i++){
        for(int j = 0; j  < 10; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void draw(char letter){
    switch(letter){
        case 'A':
            printA();
        break;
        
        case 'a':
            printA();
        break;
        
        case 'B':
            printB();
        break;
        
        case 'b':
            printB();
        break;
        
        case 'C':
            printC();
        break;
        
        case 'c':
            printC();
        break;
        
        case 'D':
            printD();
        break;
        
        case 'd':
            printD();
        break;
        
        case 'E':
            printE();
        break;
        
        case 'e':
            printE();
        break;
        
        case 'F':
            printF();
        break;
        
        case 'f':
            printF();
        break;
        
        case 'G':
            printG();
        break;
        
        case 'g':
            printG();
        break;
        
        case 'H':
            printH();
        break;
        
        case 'h':
            printH();
        break;
        
        case 'I':
            printI();
        break;
        
        case 'i':
            printI();
        break;
        
        case 'J':
            printJ();
        break;
        
        case 'j':
            printJ();
        break;
        
        case 'K':
            printK();
        break;
        
        case 'k':
            printK();
        break;
        
        case 'L':
            printL();
        break;
        
        case 'l':
            printL();
        break;
        
        case 'M':
            printM();
        break;
        
        case 'm':
            printM();
        break;
        
        case 'N':
            printN();
        break;
        
        case 'n':
            printN();
        break;
        
        case 'O':
            printO();
        break;
        
        case 'o':
            printO();
        break;
        
        case 'P':
            printP();
        break;
        
        case 'p':
            printP();
        break;
        
        case 'Q':
            printQ();
        break;
        
        case 'q':
            printQ();
        break;
        
        case 'R':
            printR();
        break;
        
        case 'r':
            printR();
        break;
        
        case 'S':
            printS();
        break;
        
        case 's':
            printS();
        break;
        
        case 'T':
            printT();
        break;
        
        case 't':
            printT();
        break;
        
        case 'U':
            printU();
        break;
        
        case 'u':
            printU();
        break;
        
        case 'V':
            printV();
        break;
        
        case 'v':
            printV();
        break;
        
        case 'W':
            printW();
        break;
        
        case 'w':
            printW();
        break;
        
        case 'X':
            printX();
        break;
        
        case 'x':
            printX();
        break;
        
        case 'Y':
            printY();
        break;
        
        case 'y':
            printY();
        break;
        
        case 'Z':
            printZ();
        break;
        
        case 'z':
            printZ();
        break;
        
        default:
            printf("Not found letter\n\n");
        break;
    }
}




//---------------------------мой старый код------------------------


// #include<stdio.h>
// #include<cs50.h>
// #include<string.h>
// #include<ctype.h>

// // void print(char letter[][]);
// // void K();



// // char matrix[10][10];
// // int i = 0;
// // int j = 0;
// // while(i < 10){
// //     while(j < 10){
// //         matrix[i][j] = " ";
// //     }
// // }





// void print(char letter[10][10]){
//     for(int i = 0; i < 10; i++){
//         for(int j = 0; j < 10; j++){
//             printf("%c", letter[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
// }

// void K(){
//     char K[10][10];
//     int a = 0;
//     int b = 0;
//     while(a < 10){
//         b = 0;
//         while(b < 10){
//             K[a][b] = ' ';
//             b++;
//         }
//         a++;
//     }
    
//     for(int i = 0; i < 10; i++){
//         K[i][0] = '#';
//         if(i < 5){
//             K[i][5 - i] = '#';
//         }
//         if(i > 4){
//             K[i][i - 4] = '#';
//         }
//     }
//     print(K);
// }


// void L(){
//     char L[10][10];
//     int a = 0;
//     int b = 0;
//     while(a < 10){
//         b = 0;
//         while(b < 10){
//             L[a][b] = ' ';
//             b++;
//         }
//         a++;
//     }
    
//     for(int i = 0; i < 10; i++){
//         L[i][0] = '#';
//         if(! (i > 4)){
//             L[9][i + 1] = '#';
//         }
//     }
//     print(L);
// }

// void M(){
//     char M[10][10];
//     int a = 0;
//     int b = 0;
//     while(a < 10){
//         b = 0;
//         while(b < 10){
//             M[a][b] = ' ';
//             b++;
//         }
//         a++;
//     }
    
//     for(int i = 0; i < 10; i++){
//         M[i][0] = '#';
//         M[i][9] = '#';
//         if(i < 4){
//             M[i + 1][i + 1] = '#';
//             M[i + 1][9 - i - 1] = '#';
//         }
//     }
//     print(M);
// }

// string getCorrectWord(string s){
//     string nw = s;
//     int i = 0;
//     while(nw[i] ! '\0'){
//         if(! isalpha(nw[i])){
//             printf("WRONG SYMBOLS!");
//         }
//         if(nw[i] > 90){
//             nw[i] = nw[i] - 32;
//         }
//         i++;
//     }
//     // string nw = s;
//     // for(int i = 0; i < strlen(nw); i++){
//     //     if(! isalpha(nw[i])){
//     //         printf("WRONG SYMBOLS!");
//     //     }
//     //     if(nw[i] > 90){
//     //         nw[i] = nw[i] - 32;
//     //     }
//     // }
//     return nw;
// }

// void print_messege(string str){
//     for(int i = 0; i < strlen(str); i++){
//         switch(str[i]){
//             case 75:
//                 K();
//                 break;
//             case 76:
//                 L();
//                 break;
//             case 77:
//                 M();
//                 break;
//         default:
//         printf( "not found letter\n" );
//         }
//     }
// }


// int main(int argc, string argv[]){
    
    
//     print_messege(getCorrectWord(argv[argc]));
    
//     // K();
//     // L();
//     // M();
//     return 0;
// }


