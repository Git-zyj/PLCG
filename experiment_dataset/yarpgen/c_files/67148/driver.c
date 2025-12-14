#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1240841296;
long long int var_3 = -8909195956631611210LL;
short var_4 = (short)23066;
unsigned short var_6 = (unsigned short)42449;
signed char var_11 = (signed char)91;
unsigned int var_12 = 1986232530U;
int zero = 0;
unsigned int var_15 = 767025520U;
signed char var_16 = (signed char)-109;
unsigned short var_17 = (unsigned short)65523;
signed char var_18 = (signed char)-91;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
