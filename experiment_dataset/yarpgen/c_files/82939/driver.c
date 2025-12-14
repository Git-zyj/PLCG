#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-106;
unsigned short var_8 = (unsigned short)32738;
signed char var_12 = (signed char)-110;
short var_15 = (short)23009;
unsigned long long int var_19 = 9027744411970641676ULL;
int zero = 0;
signed char var_20 = (signed char)-61;
unsigned int var_21 = 1009716047U;
signed char var_22 = (signed char)-73;
unsigned char var_23 = (unsigned char)173;
short var_24 = (short)22923;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
