#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 200233695;
unsigned char var_1 = (unsigned char)15;
signed char var_3 = (signed char)-109;
signed char var_4 = (signed char)10;
signed char var_5 = (signed char)112;
_Bool var_6 = (_Bool)1;
short var_7 = (short)1064;
unsigned int var_9 = 2020365384U;
short var_10 = (short)31404;
int var_11 = -33866604;
unsigned int var_12 = 1726684720U;
long long int var_13 = 6035016330626933082LL;
int zero = 0;
unsigned long long int var_14 = 5514751299881341188ULL;
int var_15 = 1857527742;
int var_16 = 1897313595;
signed char var_17 = (signed char)24;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-40;
unsigned char var_20 = (unsigned char)201;
unsigned int var_21 = 3753464039U;
short var_22 = (short)-28467;
unsigned int var_23 = 2956278286U;
unsigned long long int var_24 = 12746349504820888912ULL;
short var_25 = (short)1981;
unsigned long long int var_26 = 6608259769631393933ULL;
_Bool var_27 = (_Bool)0;
int var_28 = 1058262281;
_Bool var_29 = (_Bool)1;
short var_30 = (short)-6280;
_Bool var_31 = (_Bool)0;
signed char var_32 = (signed char)50;
int var_33 = -1332579703;
unsigned long long int arr_9 [20] ;
short arr_18 [20] [20] [20] [20] ;
signed char arr_19 [20] ;
unsigned long long int arr_20 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 12103629621100143021ULL : 14431464563729877683ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (short)-5081 : (short)-7147;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? (signed char)114 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? 2724334367887953179ULL : 7289694801682422873ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
