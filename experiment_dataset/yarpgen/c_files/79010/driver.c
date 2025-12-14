#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)88;
long long int var_10 = -19151416114234787LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
long long int var_13 = 6120966225779780086LL;
short var_14 = (short)-914;
void init() {
}

void checksum() {
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
