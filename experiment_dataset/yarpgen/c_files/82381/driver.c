#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3600043831U;
int var_11 = -92000047;
unsigned int var_13 = 3187345899U;
short var_15 = (short)27033;
unsigned int var_17 = 2712796056U;
int zero = 0;
short var_18 = (short)21882;
int var_19 = -2080307908;
unsigned int var_20 = 2288600289U;
int var_21 = 1293680273;
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
