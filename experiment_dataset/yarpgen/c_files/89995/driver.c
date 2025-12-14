#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2755452489U;
signed char var_1 = (signed char)-12;
int var_5 = 1520594568;
short var_6 = (short)13931;
unsigned short var_10 = (unsigned short)10068;
short var_11 = (short)-28602;
unsigned int var_13 = 1353065736U;
int zero = 0;
short var_16 = (short)10685;
signed char var_17 = (signed char)113;
unsigned short var_18 = (unsigned short)42451;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
