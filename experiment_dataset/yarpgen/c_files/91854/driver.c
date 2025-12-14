#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 17804222998472769918ULL;
unsigned char var_3 = (unsigned char)124;
unsigned char var_5 = (unsigned char)87;
int var_9 = -1247690961;
unsigned short var_11 = (unsigned short)35191;
unsigned long long int var_14 = 6743110228441084735ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)92;
unsigned int var_17 = 1998670524U;
short var_18 = (short)-28541;
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
