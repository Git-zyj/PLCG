#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1363138850949269266ULL;
unsigned char var_4 = (unsigned char)53;
unsigned long long int var_5 = 4576913141398375030ULL;
short var_7 = (short)26137;
unsigned long long int var_9 = 18295719907389667191ULL;
unsigned long long int var_11 = 537706399989301852ULL;
int zero = 0;
signed char var_13 = (signed char)43;
unsigned long long int var_14 = 15837073014978267610ULL;
signed char var_15 = (signed char)28;
void init() {
}

void checksum() {
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
