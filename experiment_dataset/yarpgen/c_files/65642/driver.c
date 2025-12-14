#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)63874;
unsigned char var_3 = (unsigned char)143;
unsigned char var_7 = (unsigned char)88;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)160;
unsigned char var_17 = (unsigned char)252;
unsigned char var_18 = (unsigned char)26;
long long int var_19 = -3288185579235007720LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
