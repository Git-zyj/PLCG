#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1983740095;
unsigned char var_1 = (unsigned char)2;
int var_6 = -1952064264;
int zero = 0;
long long int var_11 = 3989117382191344614LL;
int var_12 = -1885562234;
unsigned short var_13 = (unsigned short)36653;
int var_14 = 1089675078;
unsigned char var_15 = (unsigned char)73;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
