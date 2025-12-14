#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1834219913;
int var_2 = -1081704188;
unsigned short var_4 = (unsigned short)52104;
unsigned int var_5 = 1962111533U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 13404995612510190523ULL;
unsigned short var_10 = (unsigned short)45087;
short var_12 = (short)28313;
unsigned char var_13 = (unsigned char)30;
int zero = 0;
short var_16 = (short)-17028;
unsigned long long int var_17 = 1634449387287492765ULL;
unsigned short var_18 = (unsigned short)43827;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
