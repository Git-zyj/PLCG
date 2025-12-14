#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1221707196240509115LL;
unsigned char var_2 = (unsigned char)251;
unsigned char var_3 = (unsigned char)38;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 778862071U;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)-76;
signed char var_11 = (signed char)15;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 259780812U;
int zero = 0;
int var_19 = 1371584644;
signed char var_20 = (signed char)46;
signed char var_21 = (signed char)46;
_Bool var_22 = (_Bool)1;
unsigned long long int arr_0 [11] ;
unsigned char arr_1 [11] ;
_Bool arr_2 [11] [11] [11] ;
unsigned short arr_3 [11] ;
long long int arr_7 [23] [23] ;
unsigned char arr_8 [23] ;
unsigned short arr_4 [11] ;
unsigned short arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10108562804762428881ULL : 11384454416867549617ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)75 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)25314;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = -1320716161111942947LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)65398 : (unsigned short)51898;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)11253;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
