#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-10674;
int var_8 = 1502223371;
signed char var_12 = (signed char)-111;
short var_15 = (short)-23519;
int zero = 0;
unsigned short var_16 = (unsigned short)60268;
signed char var_17 = (signed char)92;
unsigned int var_18 = 3814734170U;
unsigned int var_19 = 3504819990U;
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
