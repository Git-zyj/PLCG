#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6285412281692467796LL;
signed char var_2 = (signed char)10;
long long int var_3 = 2400514539275405794LL;
unsigned int var_4 = 1158281224U;
unsigned char var_5 = (unsigned char)93;
unsigned int var_10 = 2036220760U;
int zero = 0;
signed char var_13 = (signed char)-81;
unsigned int var_14 = 276519947U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
