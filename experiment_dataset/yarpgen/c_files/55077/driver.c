#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -898954781;
unsigned short var_8 = (unsigned short)28235;
unsigned long long int var_16 = 16681224403012306127ULL;
unsigned int var_17 = 2454408143U;
int zero = 0;
unsigned char var_19 = (unsigned char)47;
signed char var_20 = (signed char)78;
unsigned long long int var_21 = 1062036574092019666ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
