#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Statistics
{
  int totalNumbers = 0;
  int sum = 0;
  int totalOdd = 0;
  int totalEven = 0;
  int totalNegative = 0;
  int totalPositive = 0;
};

// Function prototypes
void displayMainMenu();
void handleCurrencyConverter();
void handleTemperatureConverter();
void handleDataCalculator();
void handleFineCalculator();
void handleNumberEvaluator();
void handleQuickGeometry();
void handleSalaryCalculator();
void handleNumberEvaluatorInFunctions();

void calculateStats(int num, Statistics &stats)
{
  stats.totalNumbers++;
  stats.sum += num;

  if (num % 2 == 0)
  {
    stats.totalEven++;
  }
  else
  {
    stats.totalOdd++;
  }

  if (num < 0)
  {
    stats.totalNegative++;
  }
  else
  {
    stats.totalPositive++;
  }
};

double calculateSquareArea(double side)
{
  return side * side;
}
double calculateTriangleArea(double base, double height)
{
  return 0.5 * base * height;
}
double calculateCircleArea(double radius)
{
  return M_PI * radius * radius;
}
double calculateRectangleArea(double length, double width)
{
  return length * width;
}
double calculateEllipseArea(double semiMajorAxis, double semiMinorAxis)
{
  return M_PI * semiMajorAxis * semiMinorAxis;
}
double calculateTrapezoidArea(double base1, double base2, double height)
{
  return 0.5 * (base1 + base2) * height;
}

int main()
{
  cout << "JOURNAL:\n";
  cout << "Kurt Carvey M. Cadenas\n";
  cout << "20191161850\n";
  cout << "CCS2102-IT2G\n\n";

  int choice;

  while (true)
  {
    displayMainMenu();
    cin >> choice;

    switch (choice)
    {
    case 1:
      system("cls");
      handleCurrencyConverter();
      system("pause");
      system("cls");
      break;
    case 2:
      system("cls");
      handleTemperatureConverter();
      system("pause");
      system("cls");
      break;
    case 3:
      system("cls");
      handleDataCalculator();
      system("pause");
      system("cls");
      break;
    case 4:
      system("cls");
      handleFineCalculator();
      system("pause");
      system("cls");
      break;
    case 5:
      system("cls");
      handleNumberEvaluator();
      system("pause");
      system("cls");
      break;
    case 6:
      system("cls");
      handleQuickGeometry();
      system("pause");
      system("cls");
      break;
    case 7:
      system("cls");
      handleSalaryCalculator();
      system("pause");
      system("cls");
      break;
    case 8:
      system("cls");
      handleNumberEvaluatorInFunctions();
      system("pause");
      system("cls");
      break;
    case 9:
      system("cls");
      cout << "Exiting the program. Goodbye!\n";
      system("pause");
      return 0;
    default:
      system("cls");
      cout << "Invalid choice. Please enter a valid option (1-9).\n";
      system("pause");
      system("cls");
      break;
    }
  }

  return 0;
}

// Function to display the main menu
void displayMainMenu()
{
  cout << "PRELIM\n";
  cout << "Laboratory Activities\n";
  cout << "   1. Problem 1: Currency Converter\n";
  cout << "   2. Problem 2: Temperature Converter\n";
  cout << "   3. Problem 3: Data Calculator\n";
  cout << "   4. Problem 4: Fine Calculator\n";
  cout << "   5. Problem 5: Number Evaluator\n";
  cout << "   6. Problem 6: Quick Geometry\n";
  cout << "Quizzes\n";
  cout << "   7. Quiz 1: Salary Calculator\n";
  cout << "   8. Quiz 2: Number Evaluator in Functions\n\n";
  cout << "Enter file to open (Press 9 to exit): ";
}

// Define other functions to handle specific menu options
void handleCurrencyConverter()
{
  cout << "Problem 1: Currency Converter \n\n";
  // Code to handle Problem 1: Currency Converter
  double pesoAmount;
  cout << "Enter the amount in Peso: ";
  cin >> pesoAmount;

  const double dollarConversionRate = 50;
  const double euroConversionRate = 65;
  const double yenConversionRate = 2.2;

  double dollarEquivalent = pesoAmount / dollarConversionRate;
  double euroEquivalent = pesoAmount / euroConversionRate;
  double yenEquivalent = pesoAmount / yenConversionRate;

  cout << fixed << setprecision(2);

  cout << "Equivalent amounts:" << endl;
  cout << "Dollar: " << dollarEquivalent << endl;
  cout << "Euro: " << euroEquivalent << endl;
  cout << "Yen: " << yenEquivalent << endl;
  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}

void handleTemperatureConverter()
{
  // Code to handle Problem 2: Temperature Converter
  double celsiusTemperature;
  cout << "Enter the temperature in Celsius: ";
  cin >> celsiusTemperature;

  const double kelvinOffset = 273.15;
  const double fahrenheitMultiplier = 9.0 / 5.0;
  const double fahrenheitOffset = 32.0;

  double kelvinEquivalent = celsiusTemperature + kelvinOffset;
  double fahrenheitEquivalent = (celsiusTemperature * fahrenheitMultiplier) + fahrenheitOffset;

  cout << fixed << setprecision(2);

  cout << "Equivalent temperatures:" << endl;
  cout << "Kelvin: " << kelvinEquivalent << " K" << endl;
  cout << "Fahrenheit: " << fahrenheitEquivalent << " F" << endl;
  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}

void handleDataCalculator()
{
  // Code to handle Problem 3: Data Calculator
  const double maxMonthlyData = 100.0;
  const double dataCostPerGB = 10.0;

  double consumedData;
  cout << "Enter the amount of data consumed in GB: ";
  cin >> consumedData;

  double averagePerDayData = consumedData / 30.0;
  double remainingData = maxMonthlyData - consumedData;
  double amountDue = consumedData * dataCostPerGB;

  cout << fixed << setprecision(2);
  cout << "Average per day data: " << averagePerDayData << " GB" << endl;
  cout << "Remaining data: " << remainingData << " GB" << endl;
  cout << "Amount due: P" << amountDue << endl;
  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}

void handleFineCalculator()
{
  // Code to handle Problem 4: Fine Calculator
  const double baseSpeedLimit = 80.0;
  const double extraFineRate = 50.0;

  double driverSpeed;
  cout << "Enter the driver's speed in KPH: ";
  cin >> driverSpeed;

  double fine = 0.0;

  if (driverSpeed > 100.0)
  {
    double excessSpeed = driverSpeed - 100.0;
    fine = 500.0 + (excessSpeed * extraFineRate);
  }
  else if (driverSpeed > baseSpeedLimit)
  {
    fine = 500.0;
  }

  if (fine > 0.0)
  {
    cout << "Fine: P" << fine << endl;
    cout << "Cadenas, Kurt Carvey M. \n";
    cout << "20191161850 \n";
  }
  else
  {
    cout << "No fine. Safe driving!" << endl;
    cout << "Cadenas, Kurt Carvey M. \n";
    cout << "20191161850 \n";
  }
}

void handleNumberEvaluator()
{
  // Code to handle Problem 5: Number Evaluator
  int number;
  int sum = 0;

  cout << "Enter a number (enter 0 to stop): ";

  while (true)
  {
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0)
    {
      break;
    }

    sum += number;
  }

  cout << "Sum of all entered numbers: " << sum << endl;
  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}

void handleQuickGeometry()
{
  // Code to handle Problem 6: Quick Geometry
  const int numShapes = 6;
  string shapeNames[numShapes] = {"Square", "Triangle", "Circle", "Rectangle", "Ellipse", "Trapezoid"};

  cout << "Select a shape to calculate its area:" << endl;

  for (int i = 0; i < numShapes; i++)
  {
    cout << "   " << (i + 1) << ". " << shapeNames[i] << endl;
  }

  int choice;
  cout << "Enter your choice: ";
  cin >> choice;

  if (choice < 1 || choice > numShapes)
  {
    cout << "Invalid choice." << endl;
  }

  double parameters[3];
  string parameterNames[3];

  switch (choice)
  {
  case 1:
    cout << "You chose Square" << endl;
    parameterNames[0] = "side";
    break;
  case 2:
    cout << "You chose Triangle" << endl;
    parameterNames[0] = "base";
    parameterNames[1] = "height";
    break;
  case 3:
    cout << "You chose Circle" << endl;
    parameterNames[0] = "radius";
    break;
  case 4:
    cout << "You chose Rectangle" << endl;
    parameterNames[0] = "length";
    parameterNames[1] = "width";
    break;
  case 5:
    cout << "You chose Ellipse" << endl;
    parameterNames[0] = "semi-major axis";
    parameterNames[1] = "semi-minor axis";
    break;
  case 6:
    cout << "You chose Trapezoid" << endl;
    parameterNames[0] = "base 1";
    parameterNames[1] = "base 2";
    parameterNames[2] = "height";
    break;
  }

  for (int i = 0; i < 3 && !parameterNames[i].empty(); ++i)
  {
    cout << "Enter the " << parameterNames[i] << ": ";
    cin >> parameters[i];
  }

  double area;

  switch (choice)
  {
  case 1:
    area = calculateSquareArea(parameters[0]);
    break;
  case 2:
    area = calculateTriangleArea(parameters[0], parameters[1]);
    break;
  case 3:
    area = calculateCircleArea(parameters[0]);
    break;
  case 4:
    area = calculateRectangleArea(parameters[0], parameters[1]);
    break;
  case 5:
    area = calculateEllipseArea(parameters[0], parameters[1]);
    break;
  case 6:
    area = calculateTrapezoidArea(parameters[0], parameters[1], parameters[2]);
    break;
  }

  cout << "The area of the " << shapeNames[choice - 1] << " is " << area << endl;
  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}

void handleSalaryCalculator()
{
  // Code to handle Quiz 1: Salary Calculator
  double hoursWorked, ratePerHour, sss, pagIbig, philHealth;
  cout << "Enter the number of hours worked: ";
  cin >> hoursWorked;

  cout << "Enter the rate per hour: ";
  cin >> ratePerHour;

  double grossPay = hoursWorked * ratePerHour;

  double tax = grossPay * 0.1;

  cout << fixed << setprecision(1);
  cout << "\nThe Gross Pay is: " << grossPay << endl;
  cout << "The Tax is: " << tax << endl;

  cout << "Enter SSS: ";
  cin >> sss;

  cout << "Enter PagIbig: ";
  cin >> pagIbig;

  cout << "Enter PhilHealth: ";
  cin >> philHealth;

  double deductions = tax + sss + pagIbig + philHealth;

  double netPay = grossPay - deductions;

  cout << "\nThe total Deductions is: " << deductions << endl;
  cout << "The Net Pay is: " << netPay << endl;
  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}

void handleNumberEvaluatorInFunctions()
{
  // Code to handle Quiz 2: Number Evaluator in Functions
  char choice;

  do
  {
    Statistics stats;

    while (true)
    {
      int num;
      cout << "Enter a number (enter 0 to stop): ";
      cin >> num;

      calculateStats(num, stats);

      if (num == 0)
      {
        break;
      }
    }
    cout << "\nTotal numbers entered including 0: " << stats.totalNumbers << endl;
    cout << "Sum of all entered numbers: " << stats.sum << endl;
    cout << "Average of all the numbers enetered: " << static_cast<double>(stats.sum) / stats.totalNumbers << endl;
    cout << "Total odd numbers entered: " << stats.totalOdd << endl;
    cout << "Total even numbers including 0: " << stats.totalEven << endl;
    cout << "Total negative numbers entered: " << stats.totalNegative << endl;
    cout << "Total positive numbers including 0: " << stats.totalPositive << endl;

    cout << "\nDo you want to continue? (Y/N): ";
    cin >> choice;
  } while (choice == 'Y' || choice == 'y');

  cout << "Cadenas, Kurt Carvey M. \n";
  cout << "20191161850 \n";
}
