#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)82;
unsigned short var_3 = (unsigned short)25294;
unsigned short var_6 = (unsigned short)35526;
signed char var_9 = (signed char)-13;
signed char var_11 = (signed char)(-127 - 1);
int zero = 0;
unsigned short var_15 = (unsigned short)16782;
unsigned short var_16 = (unsigned short)33318;
unsigned short var_17 = (unsigned short)32771;
unsigned char var_18 = (unsigned char)212;
int var_19 = 743182233;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
