#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-5789;
unsigned long long int var_2 = 8173465923115435274ULL;
signed char var_3 = (signed char)122;
unsigned long long int var_7 = 12798142145675849898ULL;
signed char var_11 = (signed char)20;
short var_16 = (short)15991;
unsigned char var_17 = (unsigned char)247;
int zero = 0;
int var_18 = 1703412560;
int var_19 = -1272916506;
unsigned int var_20 = 258202739U;
long long int var_21 = -1905938741701246970LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
