#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6585017397193607836LL;
short var_3 = (short)14948;
int var_6 = 1012657396;
int var_9 = 537764098;
short var_10 = (short)24305;
short var_11 = (short)20087;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)48051;
unsigned char var_15 = (unsigned char)240;
int zero = 0;
signed char var_16 = (signed char)-66;
unsigned long long int var_17 = 14985948441361937615ULL;
unsigned char var_18 = (unsigned char)172;
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
