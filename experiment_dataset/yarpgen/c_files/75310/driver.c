#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -130910058481031015LL;
long long int var_6 = -2591077243611219149LL;
unsigned short var_9 = (unsigned short)55043;
unsigned int var_10 = 1686830586U;
unsigned char var_12 = (unsigned char)200;
unsigned short var_14 = (unsigned short)7461;
int zero = 0;
short var_17 = (short)-21770;
unsigned short var_18 = (unsigned short)21963;
void init() {
}

void checksum() {
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
