#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61764;
short var_1 = (short)17499;
unsigned int var_2 = 4164081315U;
short var_3 = (short)14758;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_13 = 973736741;
short var_14 = (short)-20136;
unsigned short var_15 = (unsigned short)49846;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
