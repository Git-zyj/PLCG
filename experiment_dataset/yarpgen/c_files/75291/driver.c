#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
short var_2 = (short)6776;
unsigned short var_3 = (unsigned short)31460;
unsigned int var_5 = 2949779559U;
unsigned char var_6 = (unsigned char)205;
unsigned char var_8 = (unsigned char)112;
short var_11 = (short)-11397;
unsigned long long int var_12 = 17551980454326429516ULL;
_Bool var_13 = (_Bool)0;
short var_15 = (short)23914;
short var_16 = (short)-24437;
_Bool var_18 = (_Bool)1;
int zero = 0;
short var_19 = (short)-23186;
long long int var_20 = -5463553868458501653LL;
int var_21 = 902391973;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
