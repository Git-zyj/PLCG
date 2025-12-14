#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -970746282;
unsigned short var_7 = (unsigned short)31099;
short var_8 = (short)4761;
unsigned int var_15 = 4273106434U;
int zero = 0;
unsigned long long int var_17 = 4909223663836869686ULL;
unsigned long long int var_18 = 6625266915985978457ULL;
short var_19 = (short)25218;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
