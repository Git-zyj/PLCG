#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2261883218U;
unsigned short var_4 = (unsigned short)43669;
int var_9 = 495831596;
long long int var_14 = -89266695605536313LL;
int zero = 0;
unsigned long long int var_17 = 14186562112887056768ULL;
long long int var_18 = -548612099349607534LL;
long long int var_19 = -1483318553197227501LL;
unsigned int var_20 = 3981042598U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
