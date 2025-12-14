#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3736920979U;
unsigned int var_1 = 703516713U;
unsigned int var_2 = 1728382475U;
signed char var_3 = (signed char)-104;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)22259;
unsigned long long int var_6 = 15868764331426317255ULL;
unsigned short var_7 = (unsigned short)33115;
short var_8 = (short)15339;
unsigned long long int var_9 = 8618854603044378344ULL;
unsigned int var_11 = 1721123949U;
unsigned short var_12 = (unsigned short)36797;
long long int var_13 = 5693507030497826257LL;
unsigned int var_14 = 691116683U;
unsigned char var_15 = (unsigned char)154;
short var_16 = (short)-19937;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)63685;
int zero = 0;
unsigned int var_20 = 3539658890U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)154;
unsigned int var_23 = 1326335615U;
unsigned short var_24 = (unsigned short)8343;
int var_25 = 1364990626;
short var_26 = (short)-22707;
unsigned char var_27 = (unsigned char)202;
unsigned int var_28 = 3717807567U;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 2194408158U;
short var_31 = (short)-17258;
unsigned int var_32 = 2325788716U;
unsigned char var_33 = (unsigned char)95;
signed char var_34 = (signed char)-93;
int var_35 = 1326148919;
_Bool var_36 = (_Bool)1;
unsigned int var_37 = 4031761698U;
unsigned char var_38 = (unsigned char)53;
short var_39 = (short)13006;
unsigned long long int var_40 = 16636761714815263883ULL;
unsigned int var_41 = 1928817893U;
unsigned char var_42 = (unsigned char)144;
_Bool var_43 = (_Bool)1;
unsigned short arr_0 [15] [15] ;
unsigned int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
int arr_5 [15] ;
unsigned int arr_6 [15] [15] ;
unsigned int arr_7 [15] ;
unsigned short arr_14 [15] ;
unsigned int arr_15 [15] [15] [15] [15] ;
unsigned char arr_16 [15] [15] [15] [15] ;
_Bool arr_17 [15] [15] ;
unsigned short arr_18 [15] [15] [15] [15] ;
int arr_20 [15] [15] [15] [15] [15] [15] [15] ;
signed char arr_22 [15] [15] ;
unsigned int arr_23 [15] [15] ;
unsigned char arr_28 [15] [15] [15] [15] [15] [15] ;
int arr_29 [15] [15] [15] [15] ;
signed char arr_32 [15] [15] ;
unsigned int arr_34 [15] [15] ;
signed char arr_54 [17] ;
unsigned short arr_57 [17] [17] [17] ;
signed char arr_3 [15] ;
unsigned char arr_8 [15] ;
unsigned long long int arr_11 [15] [15] ;
unsigned long long int arr_31 [15] [15] ;
signed char arr_45 [15] ;
short arr_49 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)3245;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 3271585636U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3910;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -45380741;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 2940557162U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 2138506289U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (unsigned short)54059;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = 2744995677U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned short)31151;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 1889414457;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_23 [i_0] [i_1] = 1839134648U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (unsigned char)16 : (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 130755150;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = 3588951274U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_54 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = (unsigned short)55757;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-41;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? 16906562688809591556ULL : 6868474032618125498ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 13674855970762483535ULL : 11605131022335025760ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_45 [i_0] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_49 [i_0] = (i_0 % 2 == 0) ? (short)29846 : (short)-29971;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_49 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
