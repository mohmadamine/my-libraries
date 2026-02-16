
**Library Modules**
The library is divided into **Modules**. This makes it easy to use and update.


**📥 Input Module (`read_lib`)**
       This module gets data from the user and checks if it is correct.
**Available Functions:** 
       **`read_positive_number()`** (line 11): It reads a positive number. If the input is wrong, it asks the user to try again.
       **`read_password()`** (line 21): It reads a password from the user, consisting of 3 uppercase letters between AAA and ZZZ (example: password = "AYC").
       **`read_text()`** (line 29): It reads a short text from the user.
       **`read_array()`** (line 36): It asks for the size of the array and then reads every number from the user.
       **`input_user_in_array()`** (line 48): It lets the user add many positive numbers until they choose to stop by typing 0.





**✅ Check Module (`check_lib`)**
       This module tests the data to see if it follows specific rules.
**Available Functions:**
       **`is_perfect_number()`** (line 13): It checks if the number is a **Perfect Number** (the sum of its parts equals the number).
       **`check_prime_number()`** (line 32): It checks if the number is a **Prime Number**.
       **`is_number_found_in_array()`** (line 54): It checks if a specific number is inside the array.
       **`check_array_is_palindrome_or_not()`** (line 59): It checks if the array is the same from left to right and right to left.



**🔍 data_analyzer Module (`data_analyzer`)**
       Its job is to "look" inside the data and give you useful information.
**Available Functions:**
       **`count_digit_frequency()`** (line 9): It counts how many times a specific digit appears inside a larger number.
       **`time_repeted()`** (line 25): It counts how many times a specific number is found inside an array.
       **`max_of_random_array()`** (line 38): It finds the biggest (maximum) number in the array.
       **`min_random_number()`** (line 52): It finds the smallest (minimum) number in the array.
       **`find_number_position_in_array()`** (line 65): It shows the position (index) of a number, or returns `-1` if it is not there.
       **`count_odd_numbers()`** (line 78): It counts how many odd numbers (like 1, 3, 5) are in the array.
       **`count_event_numbers()`** (line 91): It counts how many even numbers (like 2, 4, 6) are in the array.
       **`count_positive_numbers()`** (line 104): It counts how many positive numbers (zero or more) are in the array.
       **`count_negative_numbers()`** (line 117): It counts how many negative numbers (less than zero) are in the array.



**⚙️ Processing module (`Processing_Lib`)**
      A library to transform data into new shapes.
**Available Functions:**
      **`reversed_number()`** (line 12): It changes the order of numbers (example: 123 becomes 321).
      **`print_digits()`** (line 25): It prints each digit of a number on a new line.
      **`sum_of_digits()`** (line 47): It adds all the digits of a number together.
      **`my_abs()`** (line 209): It makes any negative number positive.
      **`get_fraction_part()`** (line 221): It takes only the small decimal part of a number.
      **`my_round()`** (line 226), **`my_floor()`** (line 246), **`my_ceil()`** (line 259): They help in making a decimal number a whole number.
      **`my_sqrt()`** (line 279): It calculates the square root of a number.
      **`print_number_pattern()`** (line 87): It prints a triangle of numbers going up.
      **`print_inverted_number_pattern()`** (line 74): It prints a triangle of numbers going down.
      **`print_ltter_pattern()`** (line 112): It prints a triangle of English letters from A to Z.
      **`print_inverted_litter_pattern()`** (line 99): It prints a triangle of English letters starting from the top.
      **`encrypt_text()`** (line 125): It locks the text by changing the letters using a secret key.
      **`decrypt_text()`** (line 134): It unlocks the text and brings it back to its original form.
      **`sum_numbers_with_array()`** (line 143): It adds all the numbers inside an array.
      **`average_number_with_array()`** (line 153): It finds the middle (average) value of the array.
      **`copy_array()`** (line 158): It copies all numbers from one array to another.
      **`copy_array_in_reversed_order()`** (line 192): It copies an array but flips the order of its numbers.
      **`sum_of_2_arrays()`** (line 167): It adds two arrays together and puts the result in a third one.
      **`shuffle_array()`** (line 184): It mixes the numbers in the array randomly.
      **`swap()`** (line 176): It switches the values of two variables.


**⚡ Generation Module (`generation_lib`)**
      It is the "factory" of the system, responsible for **creating and generating** new data, values, or patterns from scratch to be used by other parts.
**Available Functions:**
      **`random()`** (line 11): It creates a random number between a "start" and an "end" point.
      **`random_of_all_symbols()`** (line 26): It creates one random character (small letter, capital letter, symbol, or number).
      **`generate_word()`** (line 48): It makes a full word using random characters with a specific length.
      **`generate_key()`** (line 57): It creates one license key in this format: `XXXX-XXXX-XXXX-XXXX`.
      **`generate_keys()`** (line 67): It creates and prints many license keys at the same time.
      **`fill_array_with_random_number()`** (line 76): It fills an array with random numbers from 1 to 100.
      **`fill_order_number_in_array()`** (line 84): It fills the array with numbers in order (1, 2, 3...).
      **`fill_array_with_keys()`** (line 92): It fills a text array with many random license keys.
      **`add_array_element()`** (line 101): It adds a new number to the end of the array.
      **`copy_odd_numbers()`** (line 107): It takes only the odd numbers from one array and puts them into another array.

**🖥️ Output Module (`print_lib`)**
       It is the "display engine" of the system, responsible for **visualizing and formatting** existing data on the screen to make it readable for the user.
**Available Functions:**
      **`print_array()`** (line 8): It prints all the numbers in the array in one line with spaces.
      **`print_string_arrays()`** (line 17): It prints many random keys (like XXXX-XXXX) for the user.




      

**✨ Documented and organized by: [Mohammad Amine]**



























