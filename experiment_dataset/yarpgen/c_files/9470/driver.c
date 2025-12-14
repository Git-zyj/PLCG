#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3667579277344640788LL;
int var_10 = -668271440;
unsigned int var_11 = 2486693194U;
int zero = 0;
unsigned int var_15 = 2454590265U;
signed char var_16 = (signed char)34;
unsigned char var_17 = (unsigned char)206;
int var_18 = -153924778;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
