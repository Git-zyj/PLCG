#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2587185072U;
unsigned int var_4 = 4140278801U;
int var_7 = -652165183;
unsigned int var_8 = 4079630023U;
int var_9 = -231689087;
unsigned short var_10 = (unsigned short)60285;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
short var_12 = (short)16070;
short var_13 = (short)-2256;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
