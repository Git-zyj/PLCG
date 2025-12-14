#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18614;
short var_9 = (short)8552;
unsigned short var_11 = (unsigned short)64000;
unsigned short var_12 = (unsigned short)36935;
long long int var_15 = 2811665622470174183LL;
short var_16 = (short)-1070;
int zero = 0;
long long int var_19 = 5517047883393215257LL;
short var_20 = (short)3738;
void init() {
}

void checksum() {
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
