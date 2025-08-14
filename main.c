#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Helper functions
void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pause() {
    printf("\nPress Enter to continue...");
    getchar();
}

// Program 1 - Balance Calculator
void calculateBalance() {
    printf("Welcome to Program 1 - Balance Calculator\n");
    printf("========================================\n");

    float income, expenses, balance;

    do {
        printf("Enter total income amount: ");
        scanf("%f", &income);
        if (income < 0) {
            printf("Error: Income cannot be negative!\n");
        }
    } while (income < 0);

    do {
        printf("Enter total expenses amount: ");
        scanf("%f", &expenses);
        if (expenses < 0) {
            printf("Error: Expenses cannot be negative!\n");
        }
    } while (expenses < 0);

    balance = income - expenses;

    printf("\n--- RESULT ---\n");
    printf("Income: %.2f EUR\n", income);
    printf("Expenses: %.2f EUR\n", expenses);
    printf("Balance: %.2f EUR\n", balance);

    if (balance > 0) {
        printf("Status: POSITIVE - You have a favorable balance!\n");
    } else if (balance < 0) {
        printf("Status: NEGATIVE - Your expenses exceed your income!\n");
    } else {
        printf("Status: BALANCED - Income and expenses are equal!\n");
    }

    clearBuffer();
    pause();
}

// Program 2 - Travel Expense Manager
void manageTravel() {
    printf("Welcome to Program 2 - Travel Expense Manager\n");
    printf("============================================\n");

    int numExpenses;
    float totalBudget = 0, totalActual = 0;

    do {
        printf("How many expenses would you like to register? ");
        scanf("%d", &numExpenses);
        if (numExpenses <= 0) {
            printf("Error: You must register at least 1 expense!\n");
        }
    } while (numExpenses <= 0);

    for (int i = 1; i <= numExpenses; i++) {
        float budget, actual;

        printf("\n--- EXPENSE %d ---\n", i);

        do {
            printf("Budgeted cost: ");
            scanf("%f", &budget);
            if (budget < 0) {
                printf("Error: Cost cannot be negative!\n");
            }
        } while (budget < 0);

        do {
            printf("Actual cost: ");
            scanf("%f", &actual);
            if (actual < 0) {
                printf("Error: Cost cannot be negative!\n");
            }
        } while (actual < 0);

        totalBudget += budget;
        totalActual += actual;
    }

    printf("\n--- FINAL EVALUATION ---\n");
    printf("Total Budgeted: %.2f EUR\n", totalBudget);
    printf("Total Actual: %.2f EUR\n", totalActual);

    float difference = totalActual - totalBudget;

    if (difference == 0) {
        printf("Result: You spent exactly what was budgeted!\n");
    } else if (difference < 0) {
        printf("Result: You spent %.2f EUR LESS than budgeted!\n", -difference);
    } else {
        printf("Result: You spent %.2f EUR MORE than budgeted!\n", difference);
    }

    clearBuffer();
    pause();
}

// Program 3 - IPv4 Address Classifier
void classifyIP() {
    printf("Welcome to Program 3 - IPv4 Address Classifier\n");
    printf("==============================================\n");

    int a, b, c, d;

    printf("Enter IP address (format: x.x.x.x): ");
    if (scanf("%d.%d.%d.%d", &a, &b, &c, &d) != 4) {
        printf("Error: Invalid IP format!\n");
        clearBuffer();
        pause();
        return;
    }

    // Check if numbers are in valid range
    if (a < 0 || a > 255 || b < 0 || b > 255 || c < 0 || c > 255 || d < 0 || d > 255) {
        printf("Invalid IP Address: Values must be between 0 and 255!\n");
        clearBuffer();
        pause();
        return;
    }

    printf("IP Address: %d.%d.%d.%d\n", a, b, c, d);

    if (a >= 0 && a <= 127) {
        printf("Class: A (0.0.0.0 - 127.0.0.0)\n");
    } else if (a >= 128 && a <= 191) {
        printf("Class: B (128.0.0.0 - 191.255.0.0)\n");
    } else if (a >= 192 && a <= 223) {
        printf("Class: C (192.0.0.0 - 223.255.255.0)\n");
    } else if (a >= 224 && a <= 239) {
        printf("Class: D (224.0.0.0 - 239.255.255.255)\n");
    } else if (a >= 240 && a <= 255) {
        printf("Class: E (240.0.0.0 - 255.255.255.255)\n");
    } else {
        printf("Invalid IP Address!\n");
    }

    clearBuffer();
    pause();
}

// Program 4 - .pt Email Validator
void validateEmail() {
    printf("Welcome to Program 4 - .pt Email Validator\n");
    printf("==========================================\n");

    char email[100];
    printf("Enter an email for validation:\n");
    scanf("%s", email);

    // Find the @ position
    char *at_pos = strchr(email, '@');

    if (at_pos == NULL) {
        printf("NOK\n");
        clearBuffer();
        pause();
        return;
    }

    // Split username and domain
    int username_len = at_pos - email;
    char username[20];
    strncpy(username, email, username_len);
    username[username_len] = '\0';

    char *domain = at_pos + 1;

    // Check username length (max 10 characters)
    if (username_len > 10) {
        printf("NOK\n");
        clearBuffer();
        pause();
        return;
    }

    // Check domain (must be "iefp.pt")
    if (strcmp(domain, "iefp.pt") != 0) {
        printf("NOK\n");
        clearBuffer();
        pause();
        return;
    }

    // Check username (only lowercase letters and numbers)
    for (int i = 0; i < username_len; i++) {
        if (!((username[i] >= 'a' && username[i] <= 'z') || (username[i] >= '0' && username[i] <= '9'))) {
            printf("NOK\n");
            clearBuffer();
            pause();
            return;
        }
    }

    printf("OK\n");

    clearBuffer();
    pause();
}

// Program 5 - Currency Converter
void currencyConverter() {
    printf("Welcome to Program 5 - Currency Converter\n");
    printf("=========================================\n");

    // Currency table and exchange rates
    char currencies[][4] = {"USD", "JPY", "BGN", "CZK", "DKK", "GBP", "HUF", "PLN",
                           "RON", "SEK", "CHF", "ISK", "NOK", "TRY", "AUD", "BRL",
                           "CAD", "CNY", "HKD", "IDR", "ILS", "INR", "KRW", "MXN",
                           "MYR", "NZD", "PHP", "SGD", "THB", "ZAR"};

    float rates[] = {1.0774, 165.66, 1.9558, 25.372, 7.4588, 0.83020, 405.23, 4.3480,
                     4.9749, 11.5170, 0.9369, 148.70, 11.8415, 36.9491, 1.6423, 6.1613,
                     1.4981, 7.6895, 8.3716, 16993.40, 4.0298, 90.5700, 1496.40, 21.5719,
                     4.7172, 1.8076, 62.857, 1.4287, 36.400, 19.1063};

    int numCurrencies = 30;
    char selectedCurrency[4];
    float euros, result;
    int found = 0;

    printf("Available currencies:\n");
    printf("USD, JPY, BGN, CZK, DKK, GBP, HUF, PLN, RON, SEK\n");
    printf("CHF, ISK, NOK, TRY, AUD, BRL, CAD, CNY, HKD, IDR\n");
    printf("ILS, INR, KRW, MXN, MYR, NZD, PHP, SGD, THB, ZAR\n\n");

    printf("Enter desired currency (3 letters): ");
    scanf("%s", selectedCurrency);

    // Convert to uppercase
    for (int i = 0; selectedCurrency[i]; i++) {
        selectedCurrency[i] = toupper(selectedCurrency[i]);
    }

    // Search for the currency
    int currencyIndex = -1;
    for (int i = 0; i < numCurrencies; i++) {
        if (strcmp(selectedCurrency, currencies[i]) == 0) {
            currencyIndex = i;
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Error: Invalid currency!\n");
        clearBuffer();
        pause();
        return;
    }

    do {
        printf("Enter amount in euros: ");
        scanf("%f", &euros);
        if (euros <= 0) {
            printf("Error: Amount must be positive!\n");
        }
    } while (euros <= 0);

    result = euros * rates[currencyIndex];

    printf("\n--- CONVERSION ---\n");
    printf("%.2f EUR = %.4f %s\n", euros, result, selectedCurrency);
    printf("Exchange rate used: 1 EUR = %.4f %s\n", rates[currencyIndex], selectedCurrency);

    clearBuffer();
    pause();
}

// Program 6 - Snake Game
void simplifiedSnakeGame() {
    printf("Welcome to Program 6 - Simplified Snake Game\n");
    printf("============================================\n");

    char board[10][10];
    int snakeX[100], snakeY[100]; // Snake positions
    int currentSnakeSize = 3;
    int fruitsX[5] = {2, 7, 1, 8, 5};
    int fruitsY[5] = {2, 7, 8, 1, 5};
    int fruitsEaten[5] = {0, 0, 0, 0, 0}; // 0 = not eaten, 1 = eaten
    int totalFruitsEaten = 0;
    char action;

    // Initialize board
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            board[i][j] = ' ';
        }
    }

    // Snake initial position (center of board)
    snakeX[0] = 5; snakeY[0] = 5; // Head
    snakeX[1] = 5; snakeY[1] = 4; // Body
    snakeX[2] = 5; snakeY[2] = 3; // Tail

    // Place initial fruits on board
    for (int i = 0; i < 5; i++) {
        if (fruitsEaten[i] == 0) {
            board[fruitsX[i]][fruitsY[i]] = '.';
        }
    }

    printf("Instructions:\n");
    printf("w - Up, s - Down, a - Left, d - Right\n");
    printf("Goal: Eat all 5 fruits (.) without hitting borders or yourself!\n\n");

    while (1) {
        // Clear board from snake positions
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (board[i][j] == 'S' || board[i][j] == 'O') {
                    board[i][j] = ' ';
                }
            }
        }

        // Place only fruits that haven't been eaten yet
        for (int i = 0; i < 5; i++) {
            if (fruitsEaten[i] == 0) {
                board[fruitsX[i]][fruitsY[i]] = '.';
            }
        }

        // Place snake on board
        board[snakeX[0]][snakeY[0]] = 'S'; // Head
        for (int i = 1; i < currentSnakeSize; i++) {
            board[snakeX[i]][snakeY[i]] = 'O'; // Body
        }

        // Display board
        printf("\n");
        for (int i = 0; i < 42; i++) printf("-");
        printf("\n");
        printf("IEFP SNAKE\n\n");
        for (int i = 0; i < 14; i++) printf("-");
        printf("\n");

        for (int i = 0; i < 10; i++) {
            printf("| ");
            for (int j = 0; j < 10; j++) {
                printf("%c ", board[i][j]);
            }
            printf("|\n");
        }

        for (int i = 0; i < 14; i++) printf("-");
        printf("\n");

        printf("Fruits eaten: %d/5\n", totalFruitsEaten);
        printf("Snake size: %d\n", currentSnakeSize);
        printf("Enter desired action (Left(A) | Right(D) | Up(W) | Down(S)): ");

        scanf(" %c", &action);

        // Validate input
        if (action != 'w' && action != 's' && action != 'a' && action != 'd' &&
            action != 'W' && action != 'S' && action != 'A' && action != 'D') {
            printf("Invalid action! Use only w, s, a, d\n");
            continue;
        }

        // Convert to lowercase
        action = tolower(action);

        // Calculate new head position
        int newHeadX = snakeX[0];
        int newHeadY = snakeY[0];

        switch (action) {
            case 'w': newHeadX--; break; // Up
            case 's': newHeadX++; break; // Down
            case 'a': newHeadY--; break; // Left
            case 'd': newHeadY++; break; // Right
        }

        // Check if hit borders
        if (newHeadX < 0 || newHeadX >= 10 || newHeadY < 0 || newHeadY >= 10) {
            printf("\nGAME OVER! Snake hit the board limits!\n");
            break;
        }

        // Check if hit itself
        int hitItself = 0;
        for (int i = 0; i < currentSnakeSize; i++) {
            if (snakeX[i] == newHeadX && snakeY[i] == newHeadY) {
                hitItself = 1;
                break;
            }
        }

        if (hitItself) {
            printf("\nGAME OVER! Snake touched itself!\n");
            break;
        }

        // Check if ate a fruit
        int ateFruit = 0;
        if (board[newHeadX][newHeadY] == '.') {
            // Find which fruit was eaten and mark it as eaten
            for (int i = 0; i < 5; i++) {
                if (fruitsX[i] == newHeadX && fruitsY[i] == newHeadY && fruitsEaten[i] == 0) {
                    fruitsEaten[i] = 1; // Mark fruit as eaten
                    ateFruit = 1;
                    totalFruitsEaten++;
                    currentSnakeSize++;
                    printf("Fruit eaten! Snake grew!\n");
                    break;
                }
            }
        }

        // Move the snake
        if (!ateFruit) {
            // Move entire body (remove tail)
            for (int i = currentSnakeSize - 1; i > 0; i--) {
                snakeX[i] = snakeX[i - 1];
                snakeY[i] = snakeY[i - 1];
            }
        } else {
            // If ate fruit, don't remove tail (snake grows)
            for (int i = currentSnakeSize - 1; i > 0; i--) {
                snakeX[i] = snakeX[i - 1];
                snakeY[i] = snakeY[i - 1];
            }
        }

        // New head position
        snakeX[0] = newHeadX;
        snakeY[0] = newHeadY;

        // Check if ate all fruits
        if (totalFruitsEaten == 5) {
            printf("\nCONGRATULATIONS! You ate all fruits! VICTORY!\n");
            break;
        }
    }

    clearBuffer();
    pause();
}

// Main menu
void showMenu() {
    printf("\n");
    for (int i = 0; i < 50; i++) printf("=");
    printf("\n");
    printf("        MAIN MENU - UFCD 5412 TEST\n");
    for (int i = 0; i < 50; i++) printf("=");
    printf("\n");
    printf("1. Balance Calculator\n");
    printf("2. Travel Expense Manager\n");
    printf("3. IPv4 Address Classifier\n");
    printf("4. .pt Email Validator\n");
    printf("5. Currency Converter\n");
    printf("6. Simplified Snake Game\n");
    printf("0. Exit\n");
    for (int i = 0; i < 50; i++) printf("=");
    printf("\n");
    printf("Choose an option (0-6): ");
}

int main() {
    int option;

    printf("=========================================\n");
    printf("  WELCOME TO THE UFCD TEST SYSTEM!\n");
    printf("=========================================\n");

    do {
        showMenu();

        if (scanf("%d", &option) != 1) {
            printf("Error: Invalid option! Enter a number between 0 and 6.\n");
            clearBuffer();
            continue;
        }

        clearBuffer(); // Clear buffer after scanf

        switch (option) {
            case 1:
                calculateBalance();
                break;
            case 2:
                manageTravel();
                break;
            case 3:
                classifyIP();
                break;
            case 4:
                validateEmail();
                break;
            case 5:
                currencyConverter();
                break;
            case 6:
                simplifiedSnakeGame();
                break;
            case 0:
                printf("\nThank you for using the system!\n");
                printf("Exiting...\n");
                break;
            default:
                printf("Error: Invalid option! Choose between 0 and 6.\n");
                pause();
        }

    } while (option != 0);

    return 0;
}