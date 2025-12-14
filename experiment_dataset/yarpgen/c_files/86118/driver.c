#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)203;
unsigned int var_1 = 179037575U;
unsigned long long int var_2 = 16228429448928537094ULL;
signed char var_4 = (signed char)75;
signed char var_5 = (signed char)28;
short var_6 = (short)-16735;
short var_7 = (short)1616;
int zero = 0;
signed char var_10 = (signed char)-9;
unsigned long long int var_11 = 166994482286023905ULL;
unsigned char var_12 = (unsigned char)88;
unsigned long long int var_13 = 3293351119484950408ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
