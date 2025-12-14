#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 6133422595611713733ULL;
_Bool var_5 = (_Bool)1;
long long int var_7 = 5311646160935224434LL;
unsigned int var_8 = 4047451875U;
unsigned int var_9 = 846172752U;
_Bool var_10 = (_Bool)1;
long long int var_13 = -1725798909015246418LL;
int zero = 0;
short var_14 = (short)7948;
unsigned short var_15 = (unsigned short)38475;
signed char var_16 = (signed char)84;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)41277;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2692560909U;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)126;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)125;
short var_27 = (short)12299;
unsigned int var_28 = 1723009433U;
_Bool var_29 = (_Bool)0;
long long int var_30 = -6228681037215688983LL;
short arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned short arr_2 [18] ;
long long int arr_3 [18] [18] ;
short arr_4 [18] ;
int arr_5 [18] ;
signed char arr_6 [18] [18] ;
unsigned char arr_7 [18] ;
_Bool arr_9 [18] [18] [18] ;
unsigned short arr_10 [18] [18] [18] ;
unsigned short arr_11 [18] [18] [18] ;
short arr_13 [18] [18] [18] ;
int arr_12 [18] ;
unsigned short arr_15 [18] ;
unsigned char arr_16 [18] ;
_Bool arr_20 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-18708;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1160041338U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)29227;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = -3311255072372097115LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (short)-30864;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 256640247;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-28 : (signed char)-109;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)63801;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (unsigned short)25090;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)9845;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1085379930 : -956150891;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10274 : (unsigned short)26890;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (unsigned char)208 : (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_20 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
