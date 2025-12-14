#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-8167;
signed char var_1 = (signed char)-121;
int var_2 = 814780485;
int var_3 = 8112339;
unsigned long long int var_4 = 239741550393329183ULL;
int var_5 = 1173775565;
int var_6 = 942284824;
signed char var_8 = (signed char)93;
unsigned char var_10 = (unsigned char)129;
int var_11 = 1029066813;
short var_13 = (short)20518;
unsigned long long int var_14 = 15304497909913668751ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1118106379U;
unsigned long long int var_18 = 17898879156036287765ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
