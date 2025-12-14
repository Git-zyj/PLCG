#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
short var_1 = (short)32001;
unsigned short var_3 = (unsigned short)12549;
long long int var_5 = -7063093445078219438LL;
unsigned short var_7 = (unsigned short)27493;
unsigned char var_9 = (unsigned char)75;
int zero = 0;
unsigned int var_10 = 1865596413U;
unsigned short var_11 = (unsigned short)52281;
unsigned char var_12 = (unsigned char)166;
unsigned short var_13 = (unsigned short)10586;
unsigned long long int var_14 = 18072665864731471068ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
