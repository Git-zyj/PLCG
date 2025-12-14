#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)24291;
int var_4 = -458553088;
unsigned long long int var_5 = 10996150459173310484ULL;
unsigned short var_6 = (unsigned short)58568;
unsigned short var_12 = (unsigned short)59759;
signed char var_15 = (signed char)-116;
int zero = 0;
long long int var_16 = 2378892643305650002LL;
short var_17 = (short)4081;
void init() {
}

void checksum() {
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
