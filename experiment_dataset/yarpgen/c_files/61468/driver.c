#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1205636650U;
short var_10 = (short)32542;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 1694947797U;
long long int var_13 = 7091947385218494113LL;
unsigned char var_14 = (unsigned char)230;
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
