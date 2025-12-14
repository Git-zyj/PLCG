#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18956;
unsigned short var_1 = (unsigned short)60910;
signed char var_2 = (signed char)-39;
_Bool var_4 = (_Bool)1;
unsigned char var_7 = (unsigned char)130;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)52211;
unsigned short var_11 = (unsigned short)14700;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int var_16 = 1200010651;
signed char var_17 = (signed char)91;
int zero = 0;
short var_18 = (short)20795;
unsigned char var_19 = (unsigned char)16;
signed char var_20 = (signed char)115;
unsigned char var_21 = (unsigned char)221;
unsigned char var_22 = (unsigned char)141;
int var_23 = -1313074093;
int var_24 = 31568471;
unsigned short var_25 = (unsigned short)27136;
int var_26 = 1887605778;
unsigned short var_27 = (unsigned short)52580;
signed char var_28 = (signed char)99;
_Bool var_29 = (_Bool)0;
long long int var_30 = 5609352610626721208LL;
unsigned short var_31 = (unsigned short)17935;
unsigned long long int var_32 = 12105053617972789173ULL;
unsigned int var_33 = 1075452316U;
long long int var_34 = -7499431125435287740LL;
short var_35 = (short)15975;
_Bool var_36 = (_Bool)1;
unsigned short var_37 = (unsigned short)57271;
unsigned char var_38 = (unsigned char)19;
signed char var_39 = (signed char)50;
signed char var_40 = (signed char)125;
unsigned int var_41 = 2042485167U;
_Bool arr_0 [11] ;
signed char arr_1 [11] ;
short arr_2 [11] ;
unsigned short arr_7 [13] [13] [13] ;
short arr_8 [13] ;
int arr_10 [13] [13] ;
signed char arr_13 [13] ;
unsigned int arr_16 [13] [13] [13] ;
long long int arr_23 [24] ;
unsigned int arr_24 [24] ;
long long int arr_25 [24] ;
unsigned char arr_28 [24] [24] [24] [24] ;
unsigned long long int arr_32 [24] [24] [24] ;
long long int arr_33 [24] [24] [24] [24] [24] ;
unsigned long long int arr_34 [24] [24] [24] [24] [24] ;
signed char arr_35 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)5 : (signed char)-22;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-16188;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)16584 : (unsigned short)1250;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (short)-39 : (short)-10433;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? -725096586 : -1221632916;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 205675258U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? 3333678877396578874LL : -8166475942292310899LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 543296252U : 2744054449U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? -338154492777353969LL : -7549626652947956605LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2670633108688136443ULL : 142039537237505231ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = 3757386404792323812LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 11189493681095002959ULL : 644568803282899124ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)21 : (signed char)-123;
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
    hash(&seed, var_41);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
