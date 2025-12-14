#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8249048302095209398LL;
long long int var_1 = -4837399874012704079LL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)56348;
unsigned long long int var_6 = 11144583571268030673ULL;
unsigned short var_8 = (unsigned short)16249;
unsigned short var_9 = (unsigned short)55401;
short var_14 = (short)-6182;
unsigned int var_16 = 2008866563U;
int var_17 = -29616720;
int zero = 0;
unsigned long long int var_18 = 12718985608478768871ULL;
unsigned char var_19 = (unsigned char)51;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
