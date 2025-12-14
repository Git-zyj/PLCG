#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2209399125U;
unsigned char var_5 = (unsigned char)206;
_Bool var_7 = (_Bool)0;
_Bool var_11 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)50;
unsigned long long int var_14 = 11025468585954096345ULL;
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
