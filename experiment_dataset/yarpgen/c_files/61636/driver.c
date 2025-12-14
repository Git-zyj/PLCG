#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60368;
unsigned long long int var_4 = 14784589432940480149ULL;
long long int var_9 = 8497228707390200039LL;
signed char var_10 = (signed char)58;
int zero = 0;
long long int var_11 = -8005544744764782996LL;
signed char var_12 = (signed char)6;
short var_13 = (short)24957;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
