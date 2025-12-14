#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7791521853927430537LL;
int var_6 = -351150911;
unsigned short var_10 = (unsigned short)60791;
unsigned short var_14 = (unsigned short)30452;
int zero = 0;
unsigned short var_16 = (unsigned short)57523;
int var_17 = -1198886761;
void init() {
}

void checksum() {
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
