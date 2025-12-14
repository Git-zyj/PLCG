#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-51;
unsigned int var_1 = 140522599U;
unsigned int var_2 = 917708372U;
unsigned int var_3 = 1058302605U;
unsigned long long int var_4 = 15726956810658882958ULL;
unsigned short var_5 = (unsigned short)26712;
unsigned short var_6 = (unsigned short)31841;
signed char var_7 = (signed char)101;
int var_8 = -709062935;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)87;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-14717;
unsigned short var_14 = (unsigned short)33643;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 2968530727U;
unsigned short var_17 = (unsigned short)4069;
int zero = 0;
unsigned short var_18 = (unsigned short)7467;
long long int var_19 = 4157556183950177243LL;
unsigned short var_20 = (unsigned short)32240;
_Bool var_21 = (_Bool)0;
short var_22 = (short)19664;
unsigned char var_23 = (unsigned char)33;
unsigned short var_24 = (unsigned short)61262;
unsigned int var_25 = 3406581257U;
unsigned short var_26 = (unsigned short)54177;
unsigned long long int var_27 = 9717626147468558983ULL;
_Bool var_28 = (_Bool)1;
unsigned long long int var_29 = 17171468053527122612ULL;
unsigned short var_30 = (unsigned short)49957;
int var_31 = -824073015;
unsigned short var_32 = (unsigned short)18459;
unsigned long long int var_33 = 4527742928024397254ULL;
short var_34 = (short)-22676;
unsigned long long int var_35 = 6150847137994507419ULL;
_Bool var_36 = (_Bool)1;
unsigned short var_37 = (unsigned short)21062;
unsigned long long int var_38 = 5151677820403911839ULL;
unsigned long long int arr_1 [12] ;
int arr_2 [12] ;
unsigned short arr_6 [12] [12] [12] ;
_Bool arr_9 [12] ;
unsigned short arr_10 [12] [12] ;
unsigned short arr_13 [21] [21] ;
unsigned int arr_14 [21] ;
_Bool arr_15 [21] [21] [21] ;
_Bool arr_16 [21] [21] [21] [21] ;
_Bool arr_17 [21] [21] [21] ;
signed char arr_18 [21] ;
signed char arr_20 [21] ;
unsigned char arr_26 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_27 [21] [21] ;
unsigned short arr_28 [21] ;
unsigned short arr_30 [13] ;
unsigned int arr_32 [13] ;
unsigned short arr_34 [13] [13] [13] ;
unsigned int arr_36 [13] [13] [13] [13] ;
short arr_37 [13] [13] [13] ;
unsigned char arr_38 [13] [13] [13] [13] [13] [13] ;
unsigned short arr_11 [12] [12] [12] [12] ;
unsigned short arr_43 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 16095522861699814871ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -56854053;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)61597;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)30251;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)58102 : (unsigned short)27834;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 2618810457U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_18 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)7163;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = (unsigned short)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_30 [i_0] = (unsigned short)26428;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = 1152683946U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (unsigned short)14902;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 1179014010U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (short)10188;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)45;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)11752;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_43 [i_0] = (unsigned short)36914;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
