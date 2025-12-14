#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)2640;
short var_2 = (short)-9625;
unsigned long long int var_5 = 7503832077078221804ULL;
int zero = 0;
unsigned long long int var_17 = 701583119583774291ULL;
int var_18 = 1462264228;
signed char var_19 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
