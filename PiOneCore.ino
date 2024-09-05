#include <Arduino.h>

// Arduino Uno (8bit - 16MHz)
/*           Time      RelativeError
1'000     ->  43ms       0.031836%
10'000    ->  430ms      0.002998%
100'000   ->  4318ms     0.000220%
1'000'000 ->  43437ms    0.000083%
*/

// ESP32 C3 (32bit - 160MHz)
/*           Time      RelativeError
1'000     ->  4ms        0.031831%
10'000    ->  37ms       0.003183%
100'000   ->  373ms      0.000318%
1'000'000 ->  3747ms     0.000032%
*/

// ESP32 S3 (32bit - 240MHz)
/*           Time      RelativeError
1'000     ->  3ms        0.031831%
10'000    ->  29ms       0.003183%
100'000   ->  289ms      0.000318%
1'000'000 ->  2886ms     0.000032%
*/

const unsigned long numIterations = 1000000;   // Number of iterations for Pi approximation
double truePi = 3.1415926535;   // The known true value of Pi
double pi = 0.0;                      // Variable to store the approximated value of Pi


// Function to calculate the relative error between the approximated Pi and the true Pi
double calculateRelativeError(double approximatedPi) {
  return abs((approximatedPi - truePi) / truePi) * 100.0; // Return the error as a percentage
}

// Function to calculate the value of Pi using a series approximation
void CalculatePi() {
  unsigned long startTime = millis(); // Record the start time
  for (long k = 0; k < numIterations; k++) { // Loop through the specified number of iterations
    if (k % 2 == 0) {
      pi += 4.0 / (2 * k + 1); // Add the term to Pi if k is even
    } else {
      pi -= 4.0 / (2 * k + 1); // Subtract the term from Pi if k is odd
    }
  }
  unsigned long endTime = millis();   // Record the end time
  unsigned long duration = endTime - startTime; // Calculate the duration of the calculation

  // Output the time taken to perform the calculation
  Serial.print("Time taken: ");
  Serial.print(duration);
  Serial.println(" ms");

  // Output the approximated value of Pi
  Serial.print("Approximated Pi value: ");
  Serial.println(pi, 7); // Print Pi with 7 decimal places
  Serial.print("The real value of pi: ");
  Serial.println(truePi, 7); // Print true Pi with 7 decimal places

  // Calculate and output the relative error of the approximation
  double error = calculateRelativeError(pi);
  Serial.print("Relative Error: ");
  Serial.print(error, 6);
  Serial.println(" %");
}

void setup() {
  Serial.begin(115200); // Initialize serial communication at 115200 baud rate
  while (!Serial) {
    ; // Wait for serial port to connect. Needed for native USB boards like Arduino Leonardo
  }
  delay(1000); // Wait for a moment to ensure the serial connection is ready

  Serial.println("\nSingle-Core Pi Calculation"); // Indicate the start of the calculation
  CalculatePi(); // Call the function to calculate Pi
}

void loop() {
  // Nothing to do here
}
