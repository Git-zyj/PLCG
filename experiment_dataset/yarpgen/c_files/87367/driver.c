#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)51517;
signed char var_10 = (signed char)-84;
unsigned long long int var_15 = 6570523138244422927ULL;
int zero = 0;
unsigned long long int var_16 = 6098917618164051383ULL;
unsigned long long int var_17 = 6543870940607218177ULL;
unsigned long long int var_18 = 16860186475825538512ULL;
void init() {
}

void checksum() {
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
