#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 16047762583378489563ULL;
unsigned long long int var_10 = 5099259759013041875ULL;
signed char var_11 = (signed char)-29;
unsigned char var_13 = (unsigned char)237;
int zero = 0;
signed char var_14 = (signed char)-79;
signed char var_15 = (signed char)-21;
unsigned long long int var_16 = 460009060125681558ULL;
unsigned long long int var_17 = 6581677027943433953ULL;
unsigned long long int var_18 = 17691883655769827226ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
