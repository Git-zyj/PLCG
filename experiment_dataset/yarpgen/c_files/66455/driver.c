#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)56961;
unsigned int var_10 = 4152910917U;
unsigned long long int var_11 = 4135996407061782021ULL;
long long int var_14 = -5830022367477702229LL;
int zero = 0;
unsigned char var_19 = (unsigned char)6;
unsigned long long int var_20 = 9309296915479370366ULL;
int var_21 = -781963996;
int var_22 = 919782416;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
