Overview
This project is a simple command-line based currency converter written in C++. It allows users to convert between two currencies: USD (United States Dollar) and INR (Indian Rupee). The program provides a straightforward interface for users to input values and receive the converted amount based on a predefined exchange rate.

Features
Two-Way Conversion: The program supports conversion in both directions—USD to INR and INR to USD.
Fixed Exchange Rates:
USD to INR conversion uses a rate of 79.8635.
INR to USD conversion uses a reciprocal rate of 0.0125.
Simple and User-Friendly Interface: The program operates in a command-line environment with clear prompts and output, making it easy to use.
Basic Error Handling: The program detects invalid menu selections and alerts the user.
How It Works
User Input: The user is prompted to choose the type of conversion (USD to INR or INR to USD).
Conversion:
If USD to INR is selected, the user inputs the USD amount, and the program multiplies it by the fixed exchange rate to get the INR equivalent.
If INR to USD is selected, the user inputs the INR amount, and the program multiplies it by the fixed rate to get the USD equivalent.
Output: The program outputs the converted amount to the console.
Usage
To use the converter:

Compile the code using a C++ compiler.
Run the compiled program in a terminal or command prompt.
Follow the on-screen instructions to input the amount and select the conversion type.
Potential Enhancements
Dynamic Exchange Rates: Integrating real-time exchange rate updates via an API.
Multiple Currencies: Expanding the converter to handle more currencies.
Graphical User Interface (GUI): Adding a GUI for improved user experience.
