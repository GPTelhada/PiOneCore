# PiOneCore
Approximates Pi using the Leibniz series on Arduino. Runs x iterations, prints the time taken, the approximated Pi value with 7 decimal places, and the relative error compared to the true Pi value. This code is great to test diferent micro-controllers speeds.

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

## Example Output   
Single-Core Pi Calculation<br>
Time taken: 3753 ms<br>
Approximated Pi value: 3.1415917<br>
The real value of pi: 3.1415927<br>
Relative Error: 0.000032 %


## Performance Results

### Arduino Uno (8bit - 16MHz)
| Iterations | Time   | Relative Error |
|------------|--------|----------------|
| 1'000      | 43ms   | 0.031836%      |
| 10'000     | 430ms  | 0.002998%      |
| 100'000    | 4318ms | 0.000220%      |
| 1'000'000  | 43437ms| 0.000083%      |

### ESP32 C3 (32bit - 160MHz)
| Iterations | Time   | Relative Error |
|------------|--------|----------------|
| 1'000      | 4ms    | 0.031831%      |
| 10'000     | 37ms   | 0.003183%      |
| 100'000    | 373ms  | 0.000318%      |
| 1'000'000  | 3747ms | 0.000032%      |

### ESP32 S3 (32bit - 240MHz)
| Iterations | Time   | Relative Error |
|------------|--------|----------------|
| 1'000      | 3ms    | 0.031831%      |
| 10'000     | 29ms   | 0.003183%      |
| 100'000    | 289ms  | 0.000318%      |
| 1'000'000  | 2886ms | 0.000032%      |

