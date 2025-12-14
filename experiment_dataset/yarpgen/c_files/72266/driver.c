#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)83;
signed char var_2 = (signed char)64;
unsigned char var_4 = (unsigned char)116;
short var_6 = (short)30760;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_13 = (unsigned short)63166;
short var_14 = (short)20888;
_Bool var_15 = (_Bool)0;
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
