#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6244153627317973936LL;
unsigned char var_4 = (unsigned char)75;
short var_6 = (short)16355;
int var_11 = 387165715;
unsigned char var_14 = (unsigned char)25;
int zero = 0;
signed char var_16 = (signed char)-32;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
