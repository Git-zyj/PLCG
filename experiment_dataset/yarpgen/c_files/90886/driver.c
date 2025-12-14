#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1562425300;
unsigned short var_1 = (unsigned short)63788;
unsigned long long int var_5 = 16318719794742939962ULL;
signed char var_6 = (signed char)44;
_Bool var_8 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)6;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
