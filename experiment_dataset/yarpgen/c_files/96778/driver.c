#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)192;
short var_7 = (short)2434;
unsigned int var_9 = 3692345596U;
int var_11 = 1259513062;
int zero = 0;
unsigned short var_14 = (unsigned short)33130;
long long int var_15 = 1131932288566760364LL;
void init() {
}

void checksum() {
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
