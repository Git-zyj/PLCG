#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2079056079U;
unsigned short var_2 = (unsigned short)43076;
unsigned char var_4 = (unsigned char)139;
unsigned int var_5 = 2347582967U;
int var_6 = 1708329138;
unsigned char var_7 = (unsigned char)55;
signed char var_8 = (signed char)95;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-76;
int var_11 = -1840399800;
unsigned long long int var_12 = 16171175948479776035ULL;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1017408867U;
unsigned int var_18 = 3245853627U;
unsigned char var_19 = (unsigned char)0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 3575623608898457623LL;
long long int var_22 = -3333176281170788505LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 8036283265544447656ULL;
unsigned int var_25 = 2593681555U;
unsigned long long int var_26 = 3270983861398934444ULL;
unsigned short var_27 = (unsigned short)43081;
int var_28 = 214457422;
_Bool var_29 = (_Bool)0;
unsigned char var_30 = (unsigned char)168;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)13486;
_Bool var_33 = (_Bool)0;
unsigned short var_34 = (unsigned short)22123;
_Bool var_35 = (_Bool)1;
unsigned long long int var_36 = 3071565598154633437ULL;
unsigned int arr_0 [21] [21] ;
_Bool arr_1 [21] ;
unsigned char arr_5 [15] ;
_Bool arr_6 [15] ;
long long int arr_8 [15] [15] ;
unsigned int arr_9 [15] ;
unsigned char arr_11 [15] [15] ;
unsigned int arr_16 [15] [15] [15] [15] [15] ;
unsigned long long int arr_17 [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3883073551U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_8 [i_0] [i_1] = -8201283426874371120LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 2153885228U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)120 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = 1464570186U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 17620972259325720526ULL;
}

void checksum() {
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
    hash(&seed, var_36);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
