#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1573580885;
short var_3 = (short)5689;
int var_4 = 1515271221;
unsigned short var_7 = (unsigned short)23845;
int var_8 = 1778013955;
short var_10 = (short)28199;
unsigned short var_13 = (unsigned short)54896;
signed char var_15 = (signed char)28;
unsigned int var_18 = 2450622236U;
int zero = 0;
short var_19 = (short)-5809;
unsigned short var_20 = (unsigned short)44745;
_Bool var_21 = (_Bool)1;
int var_22 = -1632557953;
unsigned int var_23 = 1960897332U;
signed char var_24 = (signed char)-6;
unsigned int var_25 = 3393397475U;
unsigned short var_26 = (unsigned short)38283;
unsigned long long int var_27 = 17480579849151074230ULL;
int var_28 = 890211024;
int var_29 = 1555380014;
int var_30 = -1637496103;
unsigned short var_31 = (unsigned short)47245;
unsigned int var_32 = 716067505U;
short var_33 = (short)-28235;
unsigned short var_34 = (unsigned short)21122;
unsigned int arr_1 [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
unsigned short arr_5 [13] ;
unsigned int arr_10 [13] [13] ;
_Bool arr_15 [13] ;
unsigned long long int arr_6 [13] ;
_Bool arr_9 [13] [13] ;
long long int arr_13 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3473831991U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 12156683311219890436ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned short)1851;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 61202207U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 1437176058691519793ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 6506335855598513341LL;
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
