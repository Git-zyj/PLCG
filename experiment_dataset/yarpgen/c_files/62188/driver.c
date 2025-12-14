#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9717545611770784565ULL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)68;
signed char var_9 = (signed char)-16;
unsigned int var_10 = 2576926049U;
unsigned char var_11 = (unsigned char)160;
unsigned short var_12 = (unsigned short)38725;
unsigned int var_14 = 1084339015U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2420413574699874433ULL;
unsigned short var_17 = (unsigned short)17183;
int var_18 = -1628958447;
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
