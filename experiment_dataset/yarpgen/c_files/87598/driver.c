#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7844908466045476567ULL;
long long int var_13 = -5012090932500710105LL;
int var_14 = 2095295535;
int zero = 0;
long long int var_15 = 5537707573177034729LL;
unsigned long long int var_16 = 3126424596685494117ULL;
signed char var_17 = (signed char)-52;
void init() {
}

void checksum() {
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
