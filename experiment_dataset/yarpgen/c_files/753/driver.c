#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22610;
unsigned int var_4 = 1456243261U;
unsigned long long int var_5 = 8965691804541620359ULL;
short var_9 = (short)-14974;
int var_11 = -30087078;
int zero = 0;
short var_12 = (short)-21946;
unsigned short var_13 = (unsigned short)180;
short var_14 = (short)14456;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
