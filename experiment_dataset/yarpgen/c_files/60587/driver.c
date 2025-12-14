#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15127;
long long int var_1 = -5276914055583214031LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)2427;
long long int var_5 = -3407766934972565279LL;
signed char var_8 = (signed char)30;
unsigned int var_12 = 2710618512U;
unsigned short var_15 = (unsigned short)4848;
unsigned char var_16 = (unsigned char)54;
int zero = 0;
unsigned long long int var_17 = 6584293225063330301ULL;
int var_18 = -569537391;
unsigned long long int var_19 = 2004671535731011319ULL;
long long int var_20 = -2878972499405362501LL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 989702881U;
int var_23 = 242289480;
int var_24 = -1085689375;
unsigned char var_25 = (unsigned char)61;
unsigned long long int var_26 = 11674168328596819511ULL;
long long int var_27 = -110699760074382905LL;
int var_28 = -1501582453;
long long int var_29 = 1929078248307879284LL;
signed char var_30 = (signed char)111;
long long int var_31 = 7135214873604142170LL;
long long int var_32 = -1960417693564580811LL;
_Bool var_33 = (_Bool)0;
long long int var_34 = 9022180120838425218LL;
unsigned char var_35 = (unsigned char)239;
unsigned char var_36 = (unsigned char)141;
_Bool var_37 = (_Bool)0;
unsigned long long int var_38 = 6864303637684803913ULL;
long long int arr_2 [15] [15] [15] ;
long long int arr_4 [15] [15] ;
unsigned long long int arr_5 [15] ;
signed char arr_7 [15] [15] [15] [15] ;
_Bool arr_8 [15] [15] ;
unsigned long long int arr_9 [15] ;
short arr_12 [17] ;
signed char arr_13 [17] ;
int arr_14 [17] ;
long long int arr_16 [17] [17] [17] ;
signed char arr_18 [17] [17] [17] ;
short arr_19 [17] [17] [17] [17] ;
signed char arr_20 [17] [17] [17] [17] ;
unsigned long long int arr_21 [17] [17] [17] [17] ;
long long int arr_24 [17] ;
int arr_26 [17] ;
int arr_36 [17] [17] [17] ;
unsigned long long int arr_10 [15] [15] ;
signed char arr_11 [15] ;
long long int arr_27 [17] [17] [17] [17] ;
_Bool arr_37 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 2474186669461955745LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -1436585274940362434LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 6203456672286714348ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)118;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 6706303542609406667ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (short)4860;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = -734807102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 2995710673372991018LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (short)-28743;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 12080093824142174354ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_24 [i_0] = -1726660830144801771LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = -1555986765;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = 1074708441;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 11893514966468966471ULL : 897083889471503914ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (signed char)17 : (signed char)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 2860758196408788942LL : 5403388975677131176LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
