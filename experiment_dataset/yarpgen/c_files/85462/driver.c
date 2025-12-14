#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9259;
unsigned int var_5 = 432192542U;
unsigned short var_7 = (unsigned short)63500;
unsigned short var_16 = (unsigned short)33179;
int zero = 0;
short var_18 = (short)-1130;
long long int var_19 = 6988033308507417005LL;
int var_20 = 1641926232;
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
