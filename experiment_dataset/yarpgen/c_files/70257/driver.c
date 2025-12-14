#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6658416416200443253LL;
unsigned long long int var_3 = 5655870410669835837ULL;
unsigned char var_6 = (unsigned char)210;
short var_7 = (short)17585;
unsigned short var_8 = (unsigned short)34599;
signed char var_9 = (signed char)125;
short var_10 = (short)21059;
long long int var_11 = -6323539355814019680LL;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1011627876U;
int zero = 0;
unsigned long long int var_17 = 3353208870131717333ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)35130;
unsigned char var_20 = (unsigned char)138;
unsigned long long int var_21 = 14592017436743769103ULL;
long long int var_22 = -331903749560334910LL;
int var_23 = -30216339;
int var_24 = -296425035;
unsigned char var_25 = (unsigned char)95;
int var_26 = 49675550;
unsigned short var_27 = (unsigned short)53369;
long long int var_28 = -3140220064895899141LL;
short var_29 = (short)-11121;
_Bool var_30 = (_Bool)1;
long long int var_31 = 3273072844953950995LL;
signed char var_32 = (signed char)-70;
unsigned short var_33 = (unsigned short)58753;
short var_34 = (short)-1427;
signed char var_35 = (signed char)-70;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 4272288790U;
unsigned char var_38 = (unsigned char)129;
signed char var_39 = (signed char)115;
unsigned long long int var_40 = 10557979626582521615ULL;
unsigned char var_41 = (unsigned char)234;
unsigned int var_42 = 304944879U;
_Bool var_43 = (_Bool)1;
_Bool var_44 = (_Bool)0;
unsigned short var_45 = (unsigned short)12161;
int var_46 = 814770028;
unsigned long long int var_47 = 1532887788459218648ULL;
short var_48 = (short)-19924;
long long int var_49 = 1724775628829529871LL;
long long int var_50 = -434830982070749079LL;
int arr_1 [15] [15] ;
_Bool arr_3 [15] ;
signed char arr_4 [15] [15] ;
unsigned short arr_6 [15] [15] [15] ;
unsigned long long int arr_7 [15] [15] [15] ;
unsigned int arr_8 [15] [15] [15] ;
unsigned char arr_10 [15] [15] [15] [15] ;
unsigned int arr_12 [15] [15] [15] [15] [15] ;
signed char arr_13 [15] [15] [15] [15] ;
int arr_16 [15] [15] [15] [15] [15] ;
unsigned short arr_23 [24] ;
unsigned int arr_24 [24] ;
long long int arr_26 [24] [24] [24] ;
int arr_28 [24] [24] [24] ;
int arr_31 [24] [24] ;
int arr_36 [24] ;
_Bool arr_37 [24] ;
unsigned int arr_38 [24] [24] [24] ;
unsigned char arr_39 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 2044172034;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)24012;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 972538310639697621ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 508262399U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 1477673574U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (signed char)-102;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 1588269612;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned short)38606 : (unsigned short)49845;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 844700259U : 3167667433U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3439202424276273241LL : 5101155438661585188LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 94317718;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 960727707 : 1277421226;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_36 [i_0] = 773195511;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_37 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1806853437U : 3754368872U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_39 [i_0] = (unsigned char)15;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
