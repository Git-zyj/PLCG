#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)27;
signed char var_2 = (signed char)98;
short var_3 = (short)-6126;
unsigned char var_6 = (unsigned char)33;
unsigned long long int var_7 = 2380066271617111428ULL;
int zero = 0;
signed char var_10 = (signed char)-21;
int var_11 = -1442477497;
unsigned long long int var_12 = 6772433252206515034ULL;
unsigned int var_13 = 1233668373U;
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
