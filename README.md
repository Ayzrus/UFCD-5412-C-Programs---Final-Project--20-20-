# UFCD 5412 C Programs – Final Test (20/20)

A comprehensive C programming educational system developed as part of UFCD 5412, in which I achieved the highest grade (20/20). The system features 6 different utility programs designed for both learning and practical applications.

## 📋 Table of Contents

- [Overview](#overview)
- [Programs Included](#programs-included)
- [Prerequisites](#prerequisites)
- [Installation](#installation)
- [Usage](#usage)
- [Program Details](#program-details)
- [Features](#features)
- [License](#license)

## 🎯 Overview

This project is a menu-driven C application that combines six different programs into a single educational system. It was developed as part of the UFCD 5412 curriculum and demonstrates various programming concepts including input validation, data processing, string manipulation, and basic game development.

## 🛠 Programs Included

1. **Balance Calculator** - Financial balance computation tool
2. **Travel Expense Manager** - Budget vs actual expense tracker
3. **IPv4 Address Classifier** - Network address classification utility
4. **Email Validator (.pt)** - Portuguese domain email validation
5. **Currency Converter** - Multi-currency exchange calculator
6. **Simplified Snake Game** - Console-based snake game

## 🔧 Prerequisites

- GCC compiler or any C compiler
- Standard C library support
- Terminal/Console environment

## 📥 Installation

1. Clone the repository:

```bash
git clone https://github.com/Ayzrus/UFCD-5412-C-Programs---Final-Project--20-20-.git
cd UFCD-5412-C-Programs---Final-Project--20-20-
```

2. Compile the program:

```bash
gcc -o test_system main.c
```

3. Run the executable:

```bash
./test_system
```

## 🚀 Usage

After running the program, you'll see a main menu with 6 options plus an exit option. Simply enter the number corresponding to the program you want to use:

```
========================================
        MAIN MENU - UFCD 5412 TEST
========================================
1. Balance Calculator
2. Travel Expense Manager
3. IPv4 Address Classifier
4. .pt Email Validator
5. Currency Converter
6. Simplified Snake Game
0. Exit
========================================
```

## 📚 Program Details

### 1. Balance Calculator

- **Purpose**: Calculate financial balance from income and expenses
- **Input**: Income amount, expenses amount
- **Output**: Balance calculation with status (positive/negative/balanced)
- **Validation**: Prevents negative values

### 2. Travel Expense Manager

- **Purpose**: Compare budgeted vs actual travel expenses
- **Input**: Number of expenses, budgeted and actual costs for each
- **Output**: Total comparison and variance analysis
- **Features**: Handles multiple expense categories

### 3. IPv4 Address Classifier

- **Purpose**: Classify IPv4 addresses into their respective classes (A, B, C, D, E)
- **Input**: IPv4 address in x.x.x.x format
- **Output**: IP class classification with range information
- **Validation**: Checks for valid IP format and range (0-255)

### 4. .pt Email Validator

- **Purpose**: Validate Portuguese (.pt) email addresses for IEFP domain
- **Input**: Email address
- **Output**: OK/NOK validation result
- **Rules**:
  - Maximum 10 characters in username
  - Only lowercase letters and numbers allowed
  - Must end with @iefp.pt domain

### 5. Currency Converter

- **Purpose**: Convert euros to various international currencies
- **Supported Currencies**: 30 currencies including USD, GBP, JPY, etc.
- **Features**: Real exchange rates, case-insensitive currency input
- **Input**: Currency code (3 letters), euro amount
- **Output**: Converted amount with exchange rate used

### 6. Simplified Snake Game

- **Purpose**: Console-based snake game implementation
- **Controls**: W (up), S (down), A (left), D (right)
- **Objective**: Eat all 5 fruits without hitting borders or yourself
- **Features**:
  - 10x10 game board
  - Snake growth upon eating fruits
  - Collision detection
  - Score tracking

## ✨ Features

- **Input Validation**: Comprehensive error checking for all user inputs
- **User-Friendly Interface**: Clear menus and prompts
- **Error Handling**: Graceful handling of invalid inputs
- **Cross-Platform**: Works on any system with C compiler
- **Educational Value**: Demonstrates various programming concepts
- **Modular Design**: Each program is self-contained

## 🎮 Game Controls (Snake Game)

| Key | Action     |
| --- | ---------- |
| W   | Move Up    |
| S   | Move Down  |
| A   | Move Left  |
| D   | Move Right |

## 💱 Supported Currencies

The currency converter supports 30 international currencies:

**Major Currencies**: USD, GBP, JPY, CHF, CAD, AUD  
**European**: BGN, CZK, DKK, HUF, PLN, RON, SEK, NOK, ISK, TRY  
**Asian**: CNY, HKD, IDR, INR, KRW, MYR, PHP, SGD, THB  
**Others**: BRL, ILS, MXN, NZD, ZAR

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 👥 Authors

- Rodrigo Carvalho - Initial work - [MYGitHub](https://github.com/Ayzrus)

## 🙏 Acknowledgments

- UFCD 5412 curriculum for project inspiration
- Educational programming community
- Contributors and testers

---

**Note**: This project was developed for educational purposes as part of the UFCD 5412 programming course. It demonstrates fundamental C programming concepts and practical application development.
