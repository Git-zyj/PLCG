#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9017090187665626407ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)31;
unsigned int var_8 = 2493562608U;
unsigned long long int var_10 = 4968985181658698161ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)23833;
long long int var_20 = 7743027070676379901LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
