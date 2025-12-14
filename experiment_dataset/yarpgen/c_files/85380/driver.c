#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1628607506U;
unsigned long long int var_4 = 10928094622375850628ULL;
unsigned int var_5 = 405212879U;
int zero = 0;
unsigned short var_20 = (unsigned short)48121;
short var_21 = (short)5811;
unsigned long long int var_22 = 9056647390636328780ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
