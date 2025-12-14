#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 954389496910294960LL;
int var_2 = -186303307;
int var_8 = -1833070503;
int zero = 0;
long long int var_10 = -7483931667336343752LL;
_Bool var_11 = (_Bool)1;
long long int var_12 = 847647742586184190LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
