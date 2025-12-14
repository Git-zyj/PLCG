#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3504952897U;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)100;
unsigned int var_10 = 664232846U;
short var_12 = (short)1488;
short var_13 = (short)-22679;
unsigned long long int var_14 = 9735850812033206975ULL;
int zero = 0;
short var_15 = (short)-17692;
unsigned char var_16 = (unsigned char)172;
int var_17 = -1669746391;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
