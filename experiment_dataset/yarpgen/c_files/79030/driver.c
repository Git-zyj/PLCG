#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1409139666U;
unsigned char var_4 = (unsigned char)17;
short var_9 = (short)-28745;
unsigned int var_10 = 3908937478U;
unsigned int var_11 = 3233570666U;
signed char var_17 = (signed char)118;
int zero = 0;
unsigned int var_18 = 3662779501U;
int var_19 = 1528548649;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
