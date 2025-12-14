#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 592823783U;
unsigned long long int var_2 = 12397192856800494910ULL;
unsigned short var_5 = (unsigned short)51584;
unsigned long long int var_9 = 2061766743179232626ULL;
long long int var_10 = -3169091567486372262LL;
unsigned char var_13 = (unsigned char)43;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)79;
unsigned short var_16 = (unsigned short)7122;
unsigned char var_17 = (unsigned char)96;
short var_18 = (short)24660;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
