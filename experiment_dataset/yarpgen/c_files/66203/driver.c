#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-23140;
unsigned int var_1 = 1322563327U;
int var_3 = 2141972684;
unsigned long long int var_4 = 8137535321595194847ULL;
signed char var_5 = (signed char)98;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)37;
short var_8 = (short)4625;
long long int var_9 = -6293957101613414447LL;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-16022;
unsigned int var_12 = 538051759U;
unsigned int var_13 = 2911337342U;
unsigned int var_14 = 3489649940U;
_Bool var_15 = (_Bool)0;
int zero = 0;
long long int var_16 = -1635449604441172854LL;
unsigned short var_17 = (unsigned short)21517;
unsigned int var_18 = 1790851756U;
unsigned int var_19 = 3487926613U;
signed char var_20 = (signed char)-36;
short var_21 = (short)17735;
_Bool var_22 = (_Bool)1;
long long int var_23 = 9130519397996220469LL;
short var_24 = (short)-28751;
long long int var_25 = -334790205082738680LL;
long long int var_26 = 2278912029116814807LL;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)170;
int var_29 = -1225396215;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)83;
_Bool var_32 = (_Bool)1;
int var_33 = 115600737;
short var_34 = (short)32322;
long long int var_35 = 7624657024192121976LL;
long long int var_36 = -5334698246936715213LL;
signed char var_37 = (signed char)-121;
short var_38 = (short)-28753;
long long int arr_0 [17] [17] ;
long long int arr_1 [17] ;
int arr_2 [17] [17] ;
unsigned int arr_3 [17] [17] [17] ;
long long int arr_4 [17] [17] [17] ;
int arr_9 [17] [17] [17] [17] ;
signed char arr_11 [12] ;
_Bool arr_15 [12] ;
int arr_16 [24] ;
int arr_17 [24] [24] ;
signed char arr_18 [24] [24] ;
long long int arr_21 [23] [23] ;
signed char arr_24 [23] ;
int arr_27 [23] ;
_Bool arr_30 [23] ;
_Bool arr_31 [23] [23] [23] ;
short arr_32 [23] [23] [23] [23] ;
_Bool arr_12 [12] ;
long long int arr_19 [24] ;
long long int arr_36 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 5856089590111279366LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 8840250624497985409LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1507108061;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1452509392U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -3121321948394600521LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -428071086;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (signed char)-20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_16 [i_0] = -367396488;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_17 [i_0] [i_1] = -229980390;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (signed char)-40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_21 [i_0] [i_1] = -6122269176433652553LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? (signed char)-39 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = -721673757;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_30 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (short)25955;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_19 [i_0] = 2591125365522961752LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 5232011492364446170LL : -5111649224229637049LL;
}

void checksum() {
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
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
