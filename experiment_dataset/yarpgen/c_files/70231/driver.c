#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6030659429336134074ULL;
signed char var_7 = (signed char)16;
unsigned int var_10 = 170281023U;
int zero = 0;
signed char var_16 = (signed char)-94;
unsigned int var_17 = 3656795741U;
signed char var_18 = (signed char)-116;
_Bool var_19 = (_Bool)0;
long long int var_20 = 6729463210200317648LL;
unsigned long long int var_21 = 11616724351717143260ULL;
unsigned long long int var_22 = 11860639699039839538ULL;
long long int var_23 = -4822064050806921936LL;
unsigned char var_24 = (unsigned char)162;
unsigned long long int var_25 = 15576956251526687737ULL;
unsigned char arr_0 [19] [19] ;
signed char arr_1 [19] ;
unsigned short arr_7 [13] [13] [13] ;
signed char arr_11 [13] ;
unsigned char arr_13 [13] [13] [13] ;
long long int arr_14 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_19 [16] ;
_Bool arr_23 [22] ;
long long int arr_24 [22] [22] ;
long long int arr_25 [22] ;
long long int arr_2 [19] ;
unsigned short arr_16 [13] [13] [13] ;
unsigned long long int arr_17 [13] [13] [13] ;
signed char arr_21 [16] ;
unsigned long long int arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)-66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)17596 : (unsigned short)8407;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (signed char)22;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -3551510658774051347LL : 7585353673438933887LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_19 [i_0] = 10567470412907802039ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_23 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_24 [i_0] [i_1] = -6337343540065828799LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_25 [i_0] = 3366530195155123938LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 316692745797506506LL : -6463121794783161911LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)13747 : (unsigned short)37762;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7757566155121458738ULL : 5822260298751729608ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_21 [i_0] = (signed char)54;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 2147630354237712011ULL;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
