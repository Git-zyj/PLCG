#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10244726837111940563ULL;
signed char var_6 = (signed char)-7;
unsigned long long int var_7 = 13017547710016786039ULL;
unsigned int var_8 = 1879973833U;
_Bool var_11 = (_Bool)0;
unsigned short var_13 = (unsigned short)10148;
short var_14 = (short)23660;
int zero = 0;
unsigned long long int var_16 = 7170737500505376537ULL;
unsigned short var_17 = (unsigned short)43671;
signed char var_18 = (signed char)-73;
short var_19 = (short)-23663;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
