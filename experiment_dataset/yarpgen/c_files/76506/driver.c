#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)29;
unsigned short var_4 = (unsigned short)10931;
short var_5 = (short)-27243;
unsigned char var_7 = (unsigned char)44;
int zero = 0;
unsigned int var_10 = 426048134U;
unsigned short var_11 = (unsigned short)44510;
signed char var_12 = (signed char)-60;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
