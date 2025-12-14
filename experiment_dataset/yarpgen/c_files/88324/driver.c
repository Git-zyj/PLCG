#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)14;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)60233;
int var_13 = -787938658;
unsigned long long int var_14 = 660726497350589617ULL;
unsigned char var_15 = (unsigned char)101;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)3488;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1772210350171560569LL;
unsigned char var_20 = (unsigned char)97;
short var_21 = (short)-26487;
long long int var_22 = 3360987552366667471LL;
unsigned char var_23 = (unsigned char)146;
int var_24 = 876861507;
int var_25 = -1663167426;
long long int arr_1 [10] ;
signed char arr_2 [10] [10] [10] ;
signed char arr_3 [10] [10] ;
unsigned int arr_4 [10] [10] [10] [10] ;
int arr_11 [13] ;
long long int arr_12 [13] ;
unsigned long long int arr_13 [13] ;
int arr_14 [13] ;
signed char arr_15 [13] ;
unsigned long long int arr_16 [13] [13] [13] ;
int arr_20 [13] [13] [13] ;
int arr_28 [24] [24] ;
unsigned long long int arr_7 [10] [10] [10] [10] ;
long long int arr_8 [10] [10] [10] ;
unsigned char arr_9 [10] ;
_Bool arr_21 [13] ;
unsigned char arr_22 [13] ;
unsigned char arr_23 [13] ;
short arr_24 [13] ;
unsigned short arr_29 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -6908880193593837286LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 1160816054U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 88967702;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = 1321068421853095199LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 1989918975145812865ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 1723467537;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (signed char)-42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 6619449970862964039ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = -663936401;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_28 [i_0] [i_1] = -1916225145;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 16071800635514846782ULL : 12498503630806865200ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 9162506560803694262LL : -3817173232823690215LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_22 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (unsigned char)87;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = (short)30339;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_29 [i_0] = (unsigned short)40390;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_7 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_29 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
