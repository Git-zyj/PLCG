#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17861599661447511417ULL;
int var_2 = 2068254044;
signed char var_3 = (signed char)28;
short var_4 = (short)-13093;
short var_5 = (short)-18999;
int var_6 = 1191276124;
short var_7 = (short)-17157;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 532558385U;
unsigned int var_11 = 2321272506U;
long long int var_12 = 8599184453212492180LL;
_Bool var_13 = (_Bool)1;
long long int var_14 = -1914373022982148702LL;
int zero = 0;
short var_15 = (short)31608;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 5705547495046662734ULL;
int var_18 = 1408644149;
long long int var_19 = -2911442060666119093LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
