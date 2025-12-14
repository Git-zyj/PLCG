#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)29342;
int var_3 = -1366544320;
signed char var_4 = (signed char)98;
signed char var_5 = (signed char)38;
int var_7 = -2019254570;
int var_11 = -220729556;
signed char var_13 = (signed char)-23;
signed char var_15 = (signed char)-69;
signed char var_19 = (signed char)100;
int zero = 0;
unsigned int var_20 = 2423860933U;
unsigned short var_21 = (unsigned short)45777;
int var_22 = 1440775139;
int var_23 = 1601863968;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
