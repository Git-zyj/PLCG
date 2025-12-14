#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)24814;
unsigned short var_7 = (unsigned short)8924;
long long int var_8 = 4280544840981352647LL;
unsigned int var_9 = 1092511932U;
int var_12 = 950858207;
unsigned long long int var_13 = 11113190836641134741ULL;
int var_14 = -283733346;
int zero = 0;
unsigned int var_19 = 149640567U;
unsigned short var_20 = (unsigned short)64192;
unsigned int var_21 = 2126317632U;
int var_22 = 1165862474;
int var_23 = -488727138;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
