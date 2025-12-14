#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 773571002;
unsigned int var_7 = 873798739U;
unsigned long long int var_10 = 2988662589661770525ULL;
unsigned char var_11 = (unsigned char)4;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = 1195018224;
signed char var_19 = (signed char)11;
short var_20 = (short)-10782;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
