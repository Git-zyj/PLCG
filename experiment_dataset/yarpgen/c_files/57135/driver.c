#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-81;
unsigned short var_2 = (unsigned short)25992;
unsigned int var_4 = 4086704758U;
short var_5 = (short)-29605;
unsigned long long int var_6 = 5567160181025504000ULL;
unsigned short var_7 = (unsigned short)34024;
int var_8 = 129066509;
short var_10 = (short)-23809;
unsigned short var_12 = (unsigned short)57185;
signed char var_16 = (signed char)-49;
int zero = 0;
signed char var_17 = (signed char)124;
unsigned char var_18 = (unsigned char)29;
unsigned int var_19 = 2013062381U;
signed char var_20 = (signed char)-11;
unsigned short var_21 = (unsigned short)5342;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
