# Medical Store Management System

## Project Description

This is a simple Medical Store Management System developed using the C Programming Language.

The project helps manage medicine records in a medical store.
All data is stored permanently in a file named data.csv.

This project is made for beginners to learn:
- Structures
- Functions
- File Handling
- Menu Driven Programs

--------------------------------------------------

FEATURES

1. Add Medicine
2. View Medicines
3. Search Medicine
4. File Storage using CSV

--------------------------------------------------

TECHNOLOGIES USED

- C Language
- File Handling
- CSV File

--------------------------------------------------

FILE STRUCTURE

MedicalStore/
|
|-- main.c
|-- data.csv
|-- README.txt

--------------------------------------------------

STRUCTURE USED

struct Medicine
{
    int id;
    char name[50];
    int quantity;
    float price;
};

--------------------------------------------------

DATA STORAGE FORMAT

Example:

1,Paracetamol,20,50
2,Crocin,15,30
3,Dolo650,25,40

--------------------------------------------------

HOW TO COMPILE

gcc main.c -o medical

--------------------------------------------------

HOW TO RUN

For Linux/Mac:
./medical

For Windows:
medical.exe

--------------------------------------------------

MENU

1. Add Medicine
2. View Medicines
3. Search Medicine
4. Exit

--------------------------------------------------

CONCEPTS USED

- Variables
- Loops
- Functions
- Structures
- File Handling
- Strings

--------------------------------------------------

FUTURE IMPROVEMENTS

- Delete Medicine
- Update Medicine
- Billing System
- Login System
- Expiry Date Management

--------------------------------------------------

AUTHOR

Prarthana Kolhapure
BTech CSE
SCFU125021
Purva Kondguli
BTech CSE
SCFU125052
Jay Arote 
BTech CSE
SCFU125030

--------------------------------------------------

CONCLUSION

This project helps beginners understand how management systems work using C programming and file handling.
