#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 622856336U;
unsigned char var_1 = (unsigned char)225;
int var_2 = -1956357571;
int var_4 = -2045825911;
int var_5 = -2055404551;
unsigned char var_6 = (unsigned char)192;
unsigned char var_7 = (unsigned char)30;
unsigned char var_8 = (unsigned char)37;
int var_9 = 1320520500;
int var_10 = -1532180577;
int var_11 = -664314532;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)179;
unsigned int var_14 = 2154692710U;
unsigned int var_15 = 833794668U;
unsigned short var_16 = (unsigned short)53428;
unsigned char var_17 = (unsigned char)97;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 3372788314398217900ULL;
int var_21 = -1636874263;
unsigned long long int var_22 = 8109177158107989888ULL;
unsigned int var_23 = 1016714476U;
unsigned int var_24 = 336128022U;
long long int var_25 = -5446722628865075847LL;
signed char var_26 = (signed char)-64;
long long int var_27 = 2525270914307747547LL;
unsigned long long int var_28 = 11078623504845954929ULL;
unsigned char arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_2 [22] ;
unsigned char arr_3 [22] ;
_Bool arr_5 [22] [22] ;
_Bool arr_6 [22] [22] [22] ;
signed char arr_7 [22] [22] [22] ;
short arr_8 [22] [22] ;
signed char arr_9 [22] [22] ;
unsigned long long int arr_10 [22] ;
unsigned int arr_13 [22] ;
unsigned long long int arr_11 [22] [22] ;
unsigned int arr_12 [22] ;
unsigned char arr_19 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 9256789347851702540ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 7733576063131089368ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-24011;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 9447408958656672917ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = 2853613694U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 17660551828070538181ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 1782645621U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)74 : (unsigned char)6;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
