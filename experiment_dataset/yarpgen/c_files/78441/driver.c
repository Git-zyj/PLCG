#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11828;
unsigned int var_3 = 1069838051U;
unsigned long long int var_11 = 13349881107136937708ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)47761;
unsigned int var_14 = 3241737319U;
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
