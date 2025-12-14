#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-61;
short var_2 = (short)-19054;
unsigned short var_3 = (unsigned short)46935;
unsigned int var_4 = 12812154U;
int var_5 = -1507887810;
long long int var_6 = 5823789990408253674LL;
unsigned short var_7 = (unsigned short)14977;
short var_9 = (short)11753;
int var_10 = 1117532786;
int var_11 = 1669486932;
unsigned long long int var_12 = 8562025968625191290ULL;
unsigned short var_13 = (unsigned short)50175;
unsigned long long int var_14 = 7488376122236629001ULL;
long long int var_15 = 1255702448889536852LL;
unsigned char var_16 = (unsigned char)238;
short var_17 = (short)-2556;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)112;
signed char var_21 = (signed char)94;
short var_22 = (short)-587;
short var_23 = (short)-14843;
_Bool var_24 = (_Bool)0;
unsigned char var_25 = (unsigned char)66;
unsigned short var_26 = (unsigned short)54564;
int var_27 = 1826943114;
signed char var_28 = (signed char)-73;
unsigned short var_29 = (unsigned short)52192;
int var_30 = 1482488747;
signed char var_31 = (signed char)14;
short var_32 = (short)25441;
unsigned short var_33 = (unsigned short)23852;
unsigned long long int var_34 = 17132793173195813640ULL;
unsigned long long int var_35 = 8174011217398904489ULL;
unsigned char var_36 = (unsigned char)137;
long long int var_37 = 1817747490826216803LL;
short var_38 = (short)-21677;
unsigned char var_39 = (unsigned char)207;
_Bool var_40 = (_Bool)0;
signed char var_41 = (signed char)-92;
_Bool var_42 = (_Bool)1;
unsigned long long int var_43 = 14016471947562502713ULL;
unsigned short var_44 = (unsigned short)61998;
unsigned short var_45 = (unsigned short)5141;
long long int var_46 = 7468088867753182084LL;
unsigned char var_47 = (unsigned char)151;
unsigned char arr_2 [19] [19] ;
unsigned long long int arr_3 [19] ;
unsigned long long int arr_10 [19] [19] ;
unsigned long long int arr_16 [19] [19] [19] [19] [19] ;
long long int arr_17 [19] [19] [19] ;
int arr_28 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)90 : (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 7674060029579465479ULL : 7566693301475567173ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 13067785947931325100ULL : 6125995485948167174ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 8894205491041773406ULL : 12236019314251076723ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7542593065505839224LL : -6340109686139635060LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 1439899262 : -356737260;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        hash(&seed, arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
