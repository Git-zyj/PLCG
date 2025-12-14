#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14990;
short var_1 = (short)-16356;
unsigned char var_3 = (unsigned char)161;
unsigned int var_4 = 2190774890U;
unsigned short var_5 = (unsigned short)56062;
unsigned long long int var_11 = 16899868853206252095ULL;
signed char var_12 = (signed char)-48;
unsigned long long int var_13 = 5481994078690724699ULL;
unsigned long long int var_15 = 1489612583358272589ULL;
int zero = 0;
short var_17 = (short)-2403;
signed char var_18 = (signed char)95;
void init() {
}

void checksum() {
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
