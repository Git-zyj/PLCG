#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 7344124956770631819ULL;
unsigned int var_4 = 3046763424U;
short var_5 = (short)4634;
unsigned char var_8 = (unsigned char)55;
unsigned long long int var_11 = 12848658139483851706ULL;
int zero = 0;
unsigned long long int var_14 = 11619737347358342569ULL;
int var_15 = 2083038889;
unsigned long long int var_16 = 7734607670247651472ULL;
int var_17 = -105107530;
void init() {
}

void checksum() {
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
