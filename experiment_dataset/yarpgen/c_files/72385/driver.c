#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15774;
signed char var_2 = (signed char)17;
_Bool var_5 = (_Bool)0;
short var_7 = (short)7520;
unsigned long long int var_8 = 17783883673463418926ULL;
_Bool var_9 = (_Bool)1;
int var_10 = 184061533;
short var_11 = (short)-8360;
unsigned int var_13 = 2691044498U;
unsigned int var_14 = 1715142749U;
int zero = 0;
unsigned int var_16 = 3110746460U;
unsigned int var_17 = 2966087165U;
int var_18 = 1148964747;
unsigned char var_19 = (unsigned char)34;
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
