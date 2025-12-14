#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
long long int var_17 = -5636481764873424445LL;
unsigned int var_18 = 503659777U;
unsigned short var_19 = (unsigned short)840;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-57;
long long int var_22 = -6541130083748159466LL;
unsigned short var_23 = (unsigned short)15108;
unsigned char var_24 = (unsigned char)239;
unsigned char var_25 = (unsigned char)213;
unsigned short var_26 = (unsigned short)7273;
int var_27 = 428792855;
unsigned int var_28 = 421907733U;
unsigned short var_29 = (unsigned short)33794;
short var_30 = (short)-6215;
unsigned char var_31 = (unsigned char)212;
int var_32 = -472068702;
unsigned char var_33 = (unsigned char)21;
signed char var_34 = (signed char)49;
_Bool var_35 = (_Bool)1;
unsigned char var_36 = (unsigned char)223;
long long int var_37 = 5907522883147278365LL;
unsigned long long int var_38 = 5379599458836555483ULL;
_Bool var_39 = (_Bool)0;
unsigned long long int var_40 = 13853283368731574595ULL;
int var_41 = 1697610946;
unsigned short var_42 = (unsigned short)9058;
unsigned char var_43 = (unsigned char)205;
unsigned short var_44 = (unsigned short)19168;
signed char var_45 = (signed char)116;
unsigned int var_46 = 3315228464U;
int var_47 = 2031314400;
_Bool var_48 = (_Bool)1;
_Bool var_49 = (_Bool)0;
long long int var_50 = 3628872322915464900LL;
unsigned char var_51 = (unsigned char)52;
_Bool var_52 = (_Bool)1;
unsigned short var_53 = (unsigned short)60917;
unsigned short var_54 = (unsigned short)64314;
unsigned char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned char)165;
}

void checksum() {
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
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
