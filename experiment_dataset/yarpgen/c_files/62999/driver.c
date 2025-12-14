#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)179;
short var_1 = (short)28358;
long long int var_2 = -512067572143650217LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)18753;
long long int var_6 = 7630670855420818078LL;
unsigned long long int var_8 = 1253733629307341158ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
signed char var_10 = (signed char)60;
signed char var_11 = (signed char)15;
unsigned char var_12 = (unsigned char)28;
short var_13 = (short)-12832;
unsigned char var_14 = (unsigned char)228;
unsigned char var_15 = (unsigned char)131;
short var_16 = (short)20334;
short var_17 = (short)16573;
unsigned long long int var_18 = 2326666693226806038ULL;
long long int var_19 = 6946615877886503893LL;
int var_20 = 616050285;
signed char var_21 = (signed char)57;
long long int var_22 = -1658803641462114023LL;
signed char var_23 = (signed char)-18;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-103;
unsigned long long int var_27 = 12522686000359393032ULL;
signed char var_28 = (signed char)32;
signed char var_29 = (signed char)-69;
signed char var_30 = (signed char)79;
unsigned long long int var_31 = 16415733364121563153ULL;
unsigned long long int var_32 = 10848451394610505378ULL;
unsigned int var_33 = 3514976592U;
int var_34 = -511189345;
_Bool var_35 = (_Bool)1;
long long int arr_0 [20] ;
signed char arr_1 [20] ;
signed char arr_3 [20] [20] [20] ;
unsigned long long int arr_4 [20] [20] [20] ;
signed char arr_5 [20] ;
unsigned char arr_10 [20] [20] [20] [20] [20] [20] ;
signed char arr_12 [20] [20] [20] [20] [20] [20] [20] ;
short arr_15 [24] [24] ;
_Bool arr_16 [24] ;
signed char arr_18 [11] ;
signed char arr_21 [11] [11] [11] ;
signed char arr_31 [11] [11] [11] [11] ;
short arr_33 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = -2175835194280114474LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-26;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)74;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 14251954358953820444ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (signed char)110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)8;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-81;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (signed char)-106 : (signed char)-116;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-47 : (signed char)-41;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_33 [i_0] = (i_0 % 2 == 0) ? (short)-21050 : (short)2287;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
