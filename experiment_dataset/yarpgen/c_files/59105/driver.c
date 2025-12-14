#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 499196199465671873ULL;
unsigned int var_1 = 1707200506U;
unsigned int var_2 = 1991376886U;
short var_3 = (short)-29213;
unsigned char var_5 = (unsigned char)242;
unsigned char var_6 = (unsigned char)90;
signed char var_7 = (signed char)11;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16588892444641390520ULL;
int zero = 0;
unsigned int var_10 = 1826607260U;
unsigned char var_11 = (unsigned char)1;
signed char var_12 = (signed char)118;
int var_13 = -491960454;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
