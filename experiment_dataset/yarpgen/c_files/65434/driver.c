#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27501;
signed char var_8 = (signed char)-85;
unsigned int var_12 = 2766582786U;
int zero = 0;
signed char var_13 = (signed char)-63;
unsigned int var_14 = 2258245082U;
signed char var_15 = (signed char)-42;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)4221;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
