#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)28;
signed char var_6 = (signed char)63;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 746378843U;
long long int var_10 = 7398292838819205482LL;
int zero = 0;
long long int var_13 = -5778554944557294025LL;
long long int var_14 = -1859191907626687384LL;
void init() {
}

void checksum() {
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
