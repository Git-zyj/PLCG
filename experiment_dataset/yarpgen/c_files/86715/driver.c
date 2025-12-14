#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33714;
unsigned short var_1 = (unsigned short)50000;
short var_4 = (short)24672;
unsigned int var_8 = 3319282393U;
unsigned char var_10 = (unsigned char)95;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 7697737885252675387LL;
unsigned short var_13 = (unsigned short)54483;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
