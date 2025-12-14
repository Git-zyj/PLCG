#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1060117500202093891LL;
long long int var_4 = -3511367829030356879LL;
unsigned char var_6 = (unsigned char)96;
long long int var_8 = 6367789445906408453LL;
unsigned char var_10 = (unsigned char)251;
unsigned char var_11 = (unsigned char)250;
unsigned char var_12 = (unsigned char)0;
unsigned char var_14 = (unsigned char)154;
int zero = 0;
long long int var_15 = 5398585706896964898LL;
long long int var_16 = -3221431588444755190LL;
unsigned char var_17 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
