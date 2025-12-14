#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_9 = 1999509712948245019ULL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 12785943419747433001ULL;
int zero = 0;
unsigned long long int var_12 = 17682932592535089785ULL;
short var_13 = (short)7122;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
