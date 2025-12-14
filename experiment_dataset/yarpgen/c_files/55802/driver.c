#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 1304144309U;
unsigned char var_10 = (unsigned char)96;
unsigned long long int var_11 = 17539087009414141958ULL;
int zero = 0;
unsigned int var_15 = 2294527267U;
signed char var_16 = (signed char)26;
unsigned int var_17 = 3174130919U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
