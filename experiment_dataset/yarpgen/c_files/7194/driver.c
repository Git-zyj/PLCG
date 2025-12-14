#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3413998280U;
unsigned int var_3 = 329148891U;
unsigned char var_4 = (unsigned char)212;
_Bool var_5 = (_Bool)1;
int var_6 = 294996237;
unsigned long long int var_10 = 18029718564822607779ULL;
unsigned short var_11 = (unsigned short)10646;
unsigned short var_12 = (unsigned short)27469;
short var_13 = (short)-22819;
long long int var_14 = 4136019592326847777LL;
unsigned long long int var_16 = 14942422683681410594ULL;
int var_17 = -161867481;
signed char var_18 = (signed char)-102;
int zero = 0;
unsigned char var_20 = (unsigned char)198;
unsigned int var_21 = 37417033U;
unsigned char var_22 = (unsigned char)96;
unsigned short var_23 = (unsigned short)27213;
unsigned char var_24 = (unsigned char)242;
short var_25 = (short)-26446;
unsigned char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)240;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
