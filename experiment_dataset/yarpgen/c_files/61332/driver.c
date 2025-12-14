#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)33;
long long int var_7 = 8491834098819186503LL;
int zero = 0;
unsigned char var_11 = (unsigned char)36;
unsigned char var_12 = (unsigned char)145;
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
