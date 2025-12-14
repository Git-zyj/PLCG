#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1669873504144608731ULL;
unsigned int var_2 = 1933334281U;
signed char var_6 = (signed char)-109;
unsigned short var_10 = (unsigned short)47723;
unsigned short var_11 = (unsigned short)28450;
unsigned short var_12 = (unsigned short)258;
unsigned long long int var_14 = 5091650903973083123ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)58192;
long long int var_17 = 5250565435461868814LL;
signed char var_18 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
