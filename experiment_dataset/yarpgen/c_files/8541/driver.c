#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-18345;
unsigned char var_3 = (unsigned char)47;
int var_4 = 608819226;
unsigned short var_12 = (unsigned short)58780;
short var_16 = (short)-28699;
int zero = 0;
unsigned long long int var_18 = 3729862090133201091ULL;
unsigned char var_19 = (unsigned char)44;
long long int var_20 = 4235056085474448767LL;
void init() {
}

void checksum() {
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
