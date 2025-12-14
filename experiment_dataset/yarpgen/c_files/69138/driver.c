#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)65;
signed char var_3 = (signed char)-112;
long long int var_5 = 1455404878140399734LL;
unsigned short var_7 = (unsigned short)43844;
signed char var_8 = (signed char)-1;
signed char var_12 = (signed char)-94;
unsigned long long int var_16 = 12303269111996048542ULL;
int zero = 0;
unsigned int var_17 = 1863183710U;
long long int var_18 = -3655368834338527033LL;
short var_19 = (short)17030;
signed char var_20 = (signed char)65;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
