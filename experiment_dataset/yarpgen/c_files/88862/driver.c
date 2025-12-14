#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -150877016;
signed char var_6 = (signed char)90;
unsigned int var_9 = 946515830U;
unsigned char var_10 = (unsigned char)121;
long long int var_14 = 8911512269865263066LL;
int zero = 0;
unsigned char var_16 = (unsigned char)72;
short var_17 = (short)-12395;
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
