# PiOneCore
Approximates Pi using the Leibniz series on Arduino. Runs x iterations, prints the time taken, the approximated Pi value with 7 decimal places, and the relative error compared to the true Pi value.

## Features
- **Leibniz Series Calculation**: Uses the alternating series formula to approximate Pi.
- **Performance Metrics**: Outputs time taken for computation and relative error.
- **Precision**: Prints Pi with 7 decimal places and the relative error with 6 decimal places.

## Setup
1. **Hardware Requirements**:
   - Arduino board (e.g., Arduino Uno, ESP32).
   - USB connection to a computer.

2. **Software Requirements**:
   - Arduino IDE installed on your computer.
   - Serial Monitor configured to 115200 baud rate.

## How It Works
1. Initializes serial communication at 115200 baud.
2. Performs Pi calculation using one million iterations.
3. Prints the time taken, approximated Pi, true Pi, and relative error to the Serial Monitor.

## Performance Results
- **Arduino Uno (8bit - 16MHz)**
Time Relative Error 1'000 -> 43ms 0.031836% 10'000 -> 430ms 0.002998% 100'000 -> 4318ms 0.000220% 1'000'000 -> 43437ms 0.000083%
