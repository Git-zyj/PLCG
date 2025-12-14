#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)215;
long long int var_10 = 4223491119772693220LL;
unsigned char var_11 = (unsigned char)242;
unsigned short var_14 = (unsigned short)20167;
int zero = 0;
unsigned int var_17 = 3977998448U;
unsigned char var_18 = (unsigned char)129;
short var_19 = (short)7675;
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
