#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2256476415U;
signed char var_1 = (signed char)-125;
_Bool var_2 = (_Bool)1;
int var_3 = 1248807521;
long long int var_4 = -1009127949961648811LL;
int var_5 = -96007558;
signed char var_6 = (signed char)-105;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
int var_9 = -1585787324;
long long int var_10 = -8048883839959826475LL;
unsigned short var_11 = (unsigned short)57012;
unsigned int var_12 = 1948483936U;
long long int var_13 = 6079244585259937201LL;
int var_14 = -758638879;
long long int var_15 = 2773734915554142370LL;
long long int var_16 = 4115454933241341628LL;
unsigned short var_17 = (unsigned short)65086;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
int var_21 = -1800097934;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)28;
long long int var_24 = 3042929474719061492LL;
signed char var_25 = (signed char)22;
int var_26 = -1791346391;
long long int var_27 = 3457213515501820327LL;
_Bool var_28 = (_Bool)0;
unsigned short var_29 = (unsigned short)40207;
signed char var_30 = (signed char)-97;
int arr_3 [11] [11] ;
_Bool arr_8 [10] ;
int arr_9 [10] ;
_Bool arr_13 [10] ;
int arr_14 [10] ;
signed char arr_19 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1881539953;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 105662226 : 1301737730;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 154994924 : -1797494528;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)100 : (signed char)-69;
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
