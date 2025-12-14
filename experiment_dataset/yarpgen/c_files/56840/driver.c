#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -420750747;
int var_1 = -824128438;
long long int var_2 = -2352998354114233340LL;
unsigned int var_3 = 539100088U;
unsigned int var_6 = 1251753352U;
short var_7 = (short)-25227;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)18;
unsigned long long int var_13 = 1028360739318935706ULL;
int zero = 0;
short var_14 = (short)13503;
_Bool var_15 = (_Bool)1;
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
