#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 388226380U;
unsigned short var_1 = (unsigned short)7057;
int var_3 = 318553090;
signed char var_4 = (signed char)102;
signed char var_5 = (signed char)-6;
signed char var_7 = (signed char)77;
unsigned long long int var_8 = 1752764257356837417ULL;
short var_9 = (short)23531;
signed char var_12 = (signed char)65;
signed char var_13 = (signed char)81;
int zero = 0;
unsigned short var_14 = (unsigned short)32132;
unsigned short var_15 = (unsigned short)736;
short var_16 = (short)-29795;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
