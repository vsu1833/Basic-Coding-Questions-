#include <iostream>
#include <cassert>

// Function to calculate n-th Fibonacci number
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int first = 0, second = 1, next;

    for (int i = 2; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    return second;
}

// Test function
void runTests() {
    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(2) == 1);
    assert(fibonacci(3) == 2);
    assert(fibonacci(4) == 3);
    assert(fibonacci(5) == 5);
    assert(fibonacci(10) == 55);

    std::cout << "All tests passed " << std::endl;
}

int main() {
    runTests();
    return 0;
}
