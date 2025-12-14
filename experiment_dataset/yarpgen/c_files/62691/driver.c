#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62144;
long long int var_1 = -1061743825687573422LL;
unsigned char var_2 = (unsigned char)119;
_Bool var_3 = (_Bool)1;
short var_5 = (short)8575;
short var_7 = (short)16558;
unsigned short var_8 = (unsigned short)54013;
unsigned char var_9 = (unsigned char)220;
short var_10 = (short)-1319;
unsigned int var_11 = 3964221570U;
long long int var_12 = 1234300411691400827LL;
unsigned int var_13 = 2395740604U;
unsigned char var_14 = (unsigned char)195;
unsigned int var_15 = 2894677549U;
signed char var_17 = (signed char)-117;
int zero = 0;
_Bool var_18 = (_Bool)0;
short var_19 = (short)32341;
short var_20 = (short)-9164;
void init() {
}

void checksum() {
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
