#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21725;
long long int var_1 = -5070207264141360269LL;
long long int var_3 = -4723486592698381695LL;
unsigned short var_7 = (unsigned short)45260;
short var_9 = (short)29177;
int var_10 = -239020762;
int zero = 0;
short var_11 = (short)-25098;
short var_12 = (short)-14596;
unsigned short var_13 = (unsigned short)22564;
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
