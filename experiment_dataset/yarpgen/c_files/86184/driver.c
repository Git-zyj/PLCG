#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -819172096;
short var_3 = (short)-18809;
int var_5 = 751027710;
unsigned int var_7 = 3396982111U;
short var_8 = (short)12572;
int var_12 = -86539825;
int zero = 0;
unsigned int var_13 = 701237962U;
unsigned int var_14 = 2250041660U;
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
