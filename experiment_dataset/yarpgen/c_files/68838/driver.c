#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31300;
long long int var_2 = 1385713483585749171LL;
unsigned char var_5 = (unsigned char)49;
unsigned char var_10 = (unsigned char)240;
short var_13 = (short)-17779;
int zero = 0;
int var_16 = -2128780283;
unsigned long long int var_17 = 1434212735111444930ULL;
signed char var_18 = (signed char)-34;
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
