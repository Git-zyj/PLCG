#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1104;
unsigned int var_2 = 697158129U;
unsigned long long int var_5 = 2023336231576512664ULL;
unsigned long long int var_9 = 10361097682266924851ULL;
signed char var_10 = (signed char)-119;
unsigned int var_11 = 1144558472U;
int var_12 = 1703760574;
int zero = 0;
long long int var_14 = 833943866437830239LL;
signed char var_15 = (signed char)46;
void init() {
}

void checksum() {
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
