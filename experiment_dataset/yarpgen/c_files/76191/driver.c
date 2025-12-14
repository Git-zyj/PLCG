#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53968;
unsigned long long int var_2 = 10526886364534805976ULL;
unsigned int var_4 = 2954356876U;
unsigned long long int var_9 = 17462738395500478028ULL;
unsigned int var_10 = 346245633U;
unsigned int var_12 = 4060093859U;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)210;
unsigned long long int var_15 = 16674139557630687002ULL;
unsigned int var_16 = 1987103395U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
