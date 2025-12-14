#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
unsigned int var_2 = 2819713223U;
short var_3 = (short)-24558;
unsigned char var_6 = (unsigned char)168;
unsigned char var_7 = (unsigned char)160;
unsigned short var_11 = (unsigned short)1868;
unsigned char var_13 = (unsigned char)29;
signed char var_14 = (signed char)-91;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)114;
unsigned short var_17 = (unsigned short)4244;
int zero = 0;
short var_18 = (short)-30534;
signed char var_19 = (signed char)48;
short var_20 = (short)-24333;
short var_21 = (short)-19138;
short var_22 = (short)31435;
unsigned int var_23 = 4140066747U;
unsigned short var_24 = (unsigned short)14635;
unsigned short var_25 = (unsigned short)45010;
unsigned int var_26 = 2962817967U;
signed char var_27 = (signed char)-36;
unsigned short var_28 = (unsigned short)51105;
long long int var_29 = 2187125923854393672LL;
unsigned int var_30 = 3354243101U;
unsigned char var_31 = (unsigned char)186;
long long int var_32 = -5902563878953815176LL;
signed char var_33 = (signed char)-48;
signed char var_34 = (signed char)40;
int var_35 = 1790630830;
unsigned short var_36 = (unsigned short)37380;
short var_37 = (short)-8752;
unsigned char var_38 = (unsigned char)200;
short var_39 = (short)22657;
_Bool var_40 = (_Bool)1;
long long int arr_1 [13] ;
int arr_5 [13] [13] [13] ;
signed char arr_6 [13] [13] ;
unsigned int arr_7 [13] [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] ;
signed char arr_17 [10] [10] ;
long long int arr_27 [10] ;
short arr_42 [18] [18] ;
signed char arr_16 [13] ;
unsigned long long int arr_23 [10] [10] [10] ;
int arr_30 [10] [10] [10] [10] ;
signed char arr_33 [13] ;
unsigned char arr_34 [13] ;
unsigned int arr_45 [18] ;
unsigned char arr_48 [18] [18] ;
long long int arr_51 [18] ;
signed char arr_61 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4162776508477968255LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1168506734;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 1544818841U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = 2988422326930212639LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_42 [i_0] [i_1] = (short)-12872;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (signed char)-6;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 9126776789292788886ULL : 13750075060716868728ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = -513802421;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_34 [i_0] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = 3714774868U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_51 [i_0] = 4542386826779033689LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (signed char)102 : (signed char)-112;
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_33 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_45 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_48 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
