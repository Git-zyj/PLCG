#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)31250;
long long int var_12 = 2848299663372852494LL;
short var_14 = (short)-20372;
int zero = 0;
int var_15 = -935237264;
unsigned char var_16 = (unsigned char)213;
unsigned short var_17 = (unsigned short)44569;
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
