#include <iostream>

int *dangling_pointer() {
    int dp = 100;
    return &dp;
}

int main() {
    int *dp = dangling_pointer();
    *dp = 100;    
}
