#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)61085;
unsigned long long int var_2 = 3851175590157354724ULL;
unsigned short var_3 = (unsigned short)26710;
short var_6 = (short)-6492;
unsigned long long int var_8 = 12927556056348662664ULL;
signed char var_10 = (signed char)-120;
unsigned long long int var_11 = 5009022684504218688ULL;
int var_12 = 1579730632;
int zero = 0;
unsigned long long int var_15 = 14851421099425125650ULL;
unsigned short var_16 = (unsigned short)29548;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
