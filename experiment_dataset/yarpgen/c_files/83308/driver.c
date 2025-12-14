#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10351;
short var_5 = (short)32062;
unsigned char var_6 = (unsigned char)37;
short var_10 = (short)-11884;
unsigned long long int var_12 = 9303935287287567682ULL;
int zero = 0;
short var_13 = (short)-5184;
short var_14 = (short)-6193;
unsigned long long int var_15 = 10301812744100021120ULL;
unsigned long long int var_16 = 11716548843309560176ULL;
unsigned int var_17 = 3279670673U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
