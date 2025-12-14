#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-12211;
signed char var_3 = (signed char)62;
signed char var_5 = (signed char)0;
short var_6 = (short)-31055;
unsigned short var_10 = (unsigned short)58438;
signed char var_11 = (signed char)-51;
unsigned int var_12 = 2313319260U;
unsigned int var_14 = 871344852U;
signed char var_15 = (signed char)52;
int zero = 0;
int var_16 = -268665008;
short var_17 = (short)-27147;
unsigned char var_18 = (unsigned char)4;
long long int var_19 = 121287458340467529LL;
signed char var_20 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
