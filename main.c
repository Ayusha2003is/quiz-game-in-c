    
#include <stdio.h>
#include <string.h>

int i,j;
// Define the Question structure
struct Question {
    char ques[1000];
    char choice[4][100];
    int correctchoice;
};

// structure for player's info
struct Player {
    char name[100];
    int score;
};

//  structure for the stack
struct Stack {
    int items[20];
    int top;
};

void initializeQuestions(struct Question questions[20]) {
    
    strcpy(questions[0].ques, "What is the capital of France?");
    strcpy(questions[0].choice[0], "A. Paris");
    strcpy(questions[0].choice[1], "B. London");
    strcpy(questions[0].choice[2], "C. Madrid");
    strcpy(questions[0].choice[3], "D. Berlin");
    questions[0].correctchoice = 0;

    
    strcpy(questions[1].ques, " When was the Supreme Court established?");
    strcpy(questions[1].choice[0], "A.  B.S. 2009 Magh 18");
    strcpy(questions[1].choice[1], "B.  B.S. 2013 Jeshtha 08");
    strcpy(questions[1].choice[2], "C.  B.S. 2028 Jeshtha 28");
    strcpy(questions[1].choice[3], "D.  B.S. 2015 Shrawan 08");
    questions[1].correctchoice = 2;
    
    strcpy(questions[2].ques, "Cache memory acts between");
    strcpy(questions[2].choice[0], "A. CPU and Hard disk");
    strcpy(questions[2].choice[1], "B. All of these");
    strcpy(questions[2].choice[2], "C. CPU and RAM");
    strcpy(questions[2].choice[3], "D. RAM and ROM");
    questions[2].correctchoice = 2;

    strcpy(questions[3].ques, "Analog computer works on the supply of");
    strcpy(questions[3].choice[0], "A.Physical strength");
    strcpy(questions[3].choice[1], "B.  Natural strength");
    strcpy(questions[3].choice[2], "C. Magnetic strength");
    strcpy(questions[3].choice[3], "D. Continuous electrical pulses");
    questions[3].correctchoice = 3;
    
    strcpy(questions[4].ques, "What was the first feature-length animated movie ever released?");
    strcpy(questions[4].choice[0], "A. Mickey Mouse");
    strcpy(questions[4].choice[1], "B.Snow White and the Seven Dwarfs");
    strcpy(questions[4].choice[2], "C. Tom and Jerry");
    strcpy(questions[4].choice[3], "D. Cinderella");
    questions[4].correctchoice = 1;

    strcpy(questions[5].ques, " Where were The Lord of the Rings movies filmed?");
    strcpy(questions[5].choice[0], "A. Ireland");
    strcpy(questions[5].choice[1], "B. Iceland");
    strcpy(questions[5].choice[2], "C. New Zealand");
    strcpy(questions[5].choice[3], "D. Australia");
    questions[5].correctchoice = 2;
    
    strcpy(questions[6].ques, " If you watch the Marvel movies in chronological order, which movie would you watch first?");
    strcpy(questions[6].choice[0], "A. Captain America: The First Avenger ");
    strcpy(questions[6].choice[1], "B. Iron Man");
    strcpy(questions[6].choice[2], "C. Doctor Strange");
    strcpy(questions[6].choice[3], "D. The Avengers");
    questions[6].correctchoice = 0;

    strcpy(questions[7].ques, "What is the only country that borders the United Kingdom?");
    strcpy(questions[7].choice[0], "A. France");
    strcpy(questions[7].choice[1], "B. Denmark");
    strcpy(questions[7].choice[2], "C. Ireland");
    strcpy(questions[7].choice[3], "D. northern ireland ");
    questions[7].correctchoice = 2;
    
    strcpy(questions[8].ques, "Which country has the most pyramids in the world?");
    strcpy(questions[8].choice[0], "A. Mexico");
    strcpy(questions[8].choice[1], "B. Peru");
    strcpy(questions[8].choice[2], "C. Egypt");
    strcpy(questions[8].choice[3], "D. Sudan");
    questions[8].correctchoice = 3;

    strcpy(questions[9].ques, "What is the world's shortest river?");
    strcpy(questions[9].choice[0], "A. Ombla");
    strcpy(questions[9].choice[1], "B. Roe River");
    strcpy(questions[9].choice[2], "C. Reprua River");
    strcpy(questions[9].choice[3], "D. Comal River");
    questions[9].correctchoice = 1;
    
    strcpy(questions[10].ques, "Which province is the biggest in Nepal according to the area");
    strcpy(questions[10].choice[0], "A. Lumbini");
    strcpy(questions[10].choice[1], "B. Gandaki");
    strcpy(questions[10].choice[2], "C. Karnali province");
    strcpy(questions[10].choice[3], "D. Bagmati");
    questions[10].correctchoice = 2;

    strcpy(questions[11].ques, "Which Lake In Nepal Is Considered The Highest Freshwater Lake In The World?");
    strcpy(questions[11].choice[0], "A. Rara Lake");
    strcpy(questions[11].choice[1], "B. Tilicho");
    strcpy(questions[11].choice[2], "C. Phoksundo Lake");
    strcpy(questions[11].choice[3], "D. Gokyo Lake");
    questions[11].correctchoice = 3;
    
    strcpy(questions[12].ques, "Which Of The Following Is Not A Major River System In Nepal?");
    strcpy(questions[12].choice[0], "A.Karnali River");
    strcpy(questions[12].choice[1], "B. Bagmati River");
    strcpy(questions[12].choice[2], "C. Rapti");
    strcpy(questions[12].choice[3], "D. Sutlej River");
    questions[12].correctchoice = 3;

    strcpy(questions[13].ques,"How many planets in solar systems have rings");
    strcpy(questions[13].choice[0], "A. 1");
    strcpy(questions[13].choice[1], "B. 6");
    strcpy(questions[13].choice[2], "C. 2");
    strcpy(questions[13].choice[3], "D. 4");
    questions[13].correctchoice = 3;
    
    strcpy(questions[14].ques, "Which of the following two are the inferior planets in our solar system");
    strcpy(questions[14].choice[0], "A. Jupiter and Saturn");
    strcpy(questions[14].choice[1], "B. Earth and Mars");
    strcpy(questions[14].choice[2], "C. Uranus and Neptune");
    strcpy(questions[14].choice[3], "D. Mercury and Venus");
    questions[14].correctchoice = 3;
    
strcpy(questions[15].ques, "From Tech Pioneers: Who is the scientist credited with the creation of both WiFi and Bluetooth technologies?");
strcpy(questions[15].choice[0], "A. Tim Berners-Lee");
strcpy(questions[15].choice[1], "B. Hedy Lamarr");
strcpy(questions[15].choice[2], "C. Nikola Tesla");
strcpy(questions[15].choice[3], "D. Sir Jagadish Chandra Bose");
questions[15].correctchoice = 1;
    

}

// Initialize the stack
void initializeStack(struct Stack *stack) {
    stack->top = -1;
}

// Push an item onto the stack
void push(struct Stack *stack, int value) {
    stack->items[++stack->top] = value;
}

// Pop an item from the stack
int pop(struct Stack *stack) {
    return stack->items[stack->top--];
}

// Score calculation using the stack
int score(struct Question questions[20], struct Player *player) {
    int score = 0;
    char userAnswer;
    struct Stack stack;
    initializeStack(&stack);

    for ( i = 0; i <15; i++) {
        printf("\nQuestion %d:\n", i + 1);
        printf("%s\n", questions[i].ques);
        for ( j = 0; j < 4; j++) {
            printf("%s\n", questions[i].choice[j]);
        }

        printf("Enter your choice (A, B, C, D): ");
        scanf(" %c", &userAnswer);

        userAnswer = toupper(userAnswer);
        
         
        int userChoice = userAnswer - 'A';
        push(&stack, userChoice);

        if (userChoice == questions[i].correctchoice) {
            printf("Correct answer!\n");
            score++;
        } else {
            printf("Wrong answer. The correct answer was %c.\n", 'A' + questions[i].correctchoice);
        }
    }

    player->score = score;
    return score;
}
void readHighScores() {
    FILE *file = fopen("high_scores.txt", "r");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }

    printf("High Scores:\n");

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

void writePlayerScore(struct Player *player) {
    FILE *file = fopen("high_scores.txt", "a");
    if (file == NULL) {
        printf("Unable to open the file.\n");
        return;
    }
//display high score
    fprintf(file, "Name: %s, Score: %d\n", player->name, player->score);

    fclose(file);
}


int main() {
    char ch;

    // Add a variable for the player's info
    struct Player player;
    
    // Initialize player's score to 0
    player.score = 0; 

     // Initialize an array of questions
     struct Question questions[20]; 
     initializeQuestions(questions);

     printf("||------------------------------------||\n");
     printf("|     WELCOME TO THE QUIZ GAME         |\n");
     printf("||------------------------------------||\n");

     do {
         printf("|  Y. Press Y to Play                  |\n");
         printf("|  N. Press N to Quit                  |\n");
         printf("|  D. Press D for Details              |\n");
         printf("|  I. Press I to Store Student's Info  |\n");
         printf("|  S. Display the High Score           |\n");
         printf("||--------------------------------------||\n");
         printf("Enter your choice: ");
         scanf(" %c", &ch);

         switch (ch) {
             case 'Y':
             case 'y':
                /* // Ask for the player's name
                 printf("Enter your name: ");
                 scanf("%s", player.name);*/

                 // Start the quiz
                 printf("Starting the quiz...\n");
                 int finalScore = score(questions, &player);
                 printf("Your final score: %d\n", finalScore);
                 writePlayerScore(&player);
                 break;

             case 'D':
             case 'd':
                 // Display game details
                 printf("The game rules are simple :)\n");
                 printf("There are total 15 questions \n");
                 printf("If you answer correctly your score will be incremented \n");
                 printf("There will be no negative marking\n");
                 printf("Good Luck \n");
                 break;

             case 'I':
             case 'i':
                 // Store student's info
                  // Ask for the player's name
                 printf("Enter your name: ");
                // scanf("%s", player.name);
                scanf(" %[^\n]", player.name);
                 
                 break;

             case 'S':
             case 's':
                 // Display the score
                 printf("The  score is: %d\n", player.score);
                  readHighScores();
                 break;

             case 'N':
             case 'n':
                 // Quit the game
                 printf("Goodbye...\n");
                 break;

             default:
                 // Invalid input
                 printf("Invalid input, please try again.\n");
                 break;
         }
     } while (ch != 'N' && ch != 'n');

     return 0;
}
