#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)46338;
unsigned char var_2 = (unsigned char)127;
unsigned short var_3 = (unsigned short)62233;
unsigned char var_4 = (unsigned char)85;
unsigned short var_5 = (unsigned short)11177;
unsigned char var_6 = (unsigned char)59;
unsigned int var_7 = 3666868452U;
unsigned int var_8 = 3561800609U;
unsigned int var_9 = 2414846045U;
unsigned int var_10 = 3284414936U;
int zero = 0;
short var_11 = (short)-3775;
unsigned short var_12 = (unsigned short)41578;
unsigned int var_13 = 3668617225U;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1150123947U;
unsigned short var_16 = (unsigned short)6047;
unsigned short var_17 = (unsigned short)9;
unsigned int var_18 = 3012315885U;
unsigned int var_19 = 3885530828U;
unsigned char var_20 = (unsigned char)148;
unsigned char var_21 = (unsigned char)238;
unsigned char var_22 = (unsigned char)170;
unsigned short var_23 = (unsigned short)6074;
unsigned short var_24 = (unsigned short)30738;
_Bool var_25 = (_Bool)1;
short var_26 = (short)6340;
unsigned char var_27 = (unsigned char)116;
unsigned short var_28 = (unsigned short)18985;
unsigned int var_29 = 1898022506U;
unsigned int var_30 = 2451664636U;
unsigned int var_31 = 2664004957U;
unsigned int var_32 = 1731117664U;
short var_33 = (short)5719;
short var_34 = (short)19393;
unsigned short var_35 = (unsigned short)52626;
_Bool var_36 = (_Bool)0;
unsigned int var_37 = 2859555936U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
