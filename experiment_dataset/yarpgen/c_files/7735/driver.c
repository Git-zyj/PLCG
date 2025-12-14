#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)49049;
unsigned char var_6 = (unsigned char)213;
short var_12 = (short)31284;
short var_14 = (short)-10805;
unsigned long long int var_15 = 13047672201541417259ULL;
unsigned long long int var_17 = 11976322076709227083ULL;
int zero = 0;
long long int var_19 = -1230256827054188115LL;
signed char var_20 = (signed char)42;
signed char var_21 = (signed char)-92;
void init() {
}

void checksum() {
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
