#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 154814107;
long long int var_2 = -4181209566358817328LL;
unsigned int var_3 = 2566722010U;
int var_4 = 985657992;
int var_6 = 853771519;
unsigned long long int var_7 = 1609454880041539386ULL;
int zero = 0;
long long int var_10 = -95958266505947681LL;
unsigned long long int var_11 = 8787904177660800937ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
