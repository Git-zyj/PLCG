#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1766403713367594785ULL;
unsigned char var_2 = (unsigned char)0;
unsigned char var_4 = (unsigned char)36;
unsigned long long int var_5 = 13572918404700360663ULL;
unsigned int var_7 = 359669209U;
unsigned char var_8 = (unsigned char)249;
unsigned char var_10 = (unsigned char)83;
unsigned int var_11 = 682904608U;
unsigned int var_12 = 1631517447U;
unsigned char var_13 = (unsigned char)231;
unsigned short var_14 = (unsigned short)40114;
int zero = 0;
short var_15 = (short)9607;
unsigned short var_16 = (unsigned short)62309;
unsigned short var_17 = (unsigned short)421;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3493757073U;
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
