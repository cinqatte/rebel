## Rebel: A Header-Only C Utility Library

Rebel is a lightweight, header-only C utility library designed to simplify common programming tasks and improve code readability. It provides a collection of macros and functions for:

- **Basic types:** Defining a `bool` type for better type safety.
- **Code style:**  Macros for consistent code structure using `begin`, `then`, `done`, and `end`.
- **Constants:**  Defining common constants like `true`, `false`, `null`, and `nullptr`.
- **Math:** Macros for min, max, absolute value, sign, floor, ceil, rounding, clamping, and powers.
- **Array manipulation:** Macros for calculating array size and iterating over arrays.
- **Iteration:** Macros for `map`, `in_range`, and `foreach`.
- **Function definition:**  `fun` macro for simplified function declaration.
- **Type casting:**  `cast` macro for explicit type casting.
- **Looping:**  Macros for `forever`, `loop`, and `until` for flexible loop control.

### Usage

1. **Include the Rebel.h header file:**
   ```c
   #include "Rebel.h"
   ```

2. **Use the macros and functions:**

   ```c
   #include "Rebel.h"

   int main() {
       int a = 10, b = 5, c = 15;

       // Min and Max
       int min_val = min(a, b);   // min_val = 5
       int max_val = max(a, c);   // max_val = 15

       // Array Size
       int array[] = {1, 2, 3, 4, 5};
       int array_size = array_size(array); // array_size = 5

       // Iteration
       map(printf("%d ",  array);  // Prints: 1 2 3 4 5
       
       // Function Definition
       fun(int, add, int x, int y) {
           return x + y;
       }

       // Looping
       int i = 0;
       loop (i < 10) {
           printf("%d\n", i);
           i++;
       }

       return 0;
   } 
   ```

### Installation

Rebel is a header-only library, meaning it doesn't require compilation. Simply copy the `Rebel.h` file to your project directory and include it in your code.

### Contributing

Contributions are welcome! Please open an issue or submit a pull request for any bugs, feature requests, or improvements.

### Disclaimer

Rebel is provided "as is," without warranty of any kind. Use it at your own risk.

**This README provides a starting point. Please adapt and expand it to suit your specific needs and the features of your library.**
