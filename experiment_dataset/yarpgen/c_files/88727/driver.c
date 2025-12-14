#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_3 = 3157144693U;
long long int var_6 = 4943660042634760535LL;
signed char var_8 = (signed char)26;
unsigned int var_9 = 211792246U;
_Bool var_10 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)25;
long long int var_12 = 7717651392241252190LL;
short var_13 = (short)-27257;
short var_14 = (short)23192;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
