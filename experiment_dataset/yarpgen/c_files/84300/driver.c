#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 406232999;
unsigned short var_5 = (unsigned short)23205;
_Bool var_6 = (_Bool)0;
int var_7 = -1543368503;
signed char var_8 = (signed char)58;
long long int var_9 = -2037126196879661432LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 512855992;
unsigned short var_12 = (unsigned short)29006;
int var_13 = 1424259903;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
