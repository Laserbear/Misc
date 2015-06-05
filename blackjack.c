
int drawcard() {
    int card_value = 2 + rand() % 10;
    return card_value;
}


void main() {
    srand(time(NULL));
    printf("Ayy bb, les play\n");
    int hand_value = 0;
    hand_value += drawcard();
    hand_value += drawcard();
    int break_check;
    int not_busted_check = 1;
    int cards_drawn;
    while ((hand_value < 21) && (break_check != 1337)) {
        printf("Your hand value is %d\n", hand_value);
        printf("Would you like to draw another? 1 for yes, 0 for no\n");
        int answer;
        scanf("%d", &answer);
        if ((answer != 1) && (answer != 0)) {
            while ((answer != 1) || (answer != 0)) {
                printf("Invalid Input\n");
                scanf("%d", &answer);
            }
        }
        if (answer) {
            hand_value += drawcard();
        }
        else {
            break_check = 1337;
        }
    }
    printf("Your hand value is %d\n", hand_value);
    if (hand_value == 21) {
        printf("BlackJack!\n");
    }
    if (hand_value > 21) {
        printf("Busted!\n");
        hand_value = 0;

    }
    printf("Computer's turn: \n");
    int computer_hand = drawcard() + drawcard();
    while (computer_hand < 17) {
        computer_hand += drawcard();

    }
    printf("Computer's hand is %d\n", computer_hand);
    if ( computer_hand == 21) {
        printf("BlackJack!\n");
    }
    if (computer_hand > 21) {
        printf("Busted!");
        computer_hand = 0;
    }

    if (computer_hand < hand_value) {
        printf("Player Wins!\n");
    }
    else if (hand_value < computer_hand) {
        printf("Computer Wins!\n");
    }
    else {
        printf("Tie. You both suck.\n");
    }



}
