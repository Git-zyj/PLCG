#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1467417284354014615ULL;
unsigned long long int var_1 = 1875275804884933509ULL;
unsigned short var_3 = (unsigned short)24057;
short var_4 = (short)23408;
unsigned char var_5 = (unsigned char)134;
signed char var_8 = (signed char)-82;
short var_9 = (short)12843;
short var_10 = (short)13986;
long long int var_11 = -324684569784595233LL;
int zero = 0;
signed char var_12 = (signed char)-47;
long long int var_13 = 1002115370717504845LL;
short var_14 = (short)-12271;
long long int var_15 = 1093963031975984922LL;
signed char var_16 = (signed char)54;
int var_17 = -69491273;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 10229450377159027241ULL;
int var_20 = -616624803;
unsigned long long int var_21 = 5399118540210376242ULL;
_Bool var_22 = (_Bool)1;
short arr_1 [16] ;
long long int arr_2 [16] ;
unsigned char arr_4 [16] [16] ;
int arr_5 [16] ;
signed char arr_6 [16] [16] [16] ;
_Bool arr_7 [16] ;
unsigned int arr_8 [16] [16] [16] [16] ;
int arr_9 [16] ;
_Bool arr_10 [16] [16] [16] [16] [16] ;
unsigned long long int arr_12 [16] ;
int arr_13 [16] ;
short arr_15 [19] [19] ;
short arr_16 [19] [19] ;
short arr_17 [19] ;
unsigned long long int arr_18 [19] ;
short arr_19 [19] [19] [19] [19] ;
unsigned long long int arr_21 [19] [19] ;
_Bool arr_22 [19] [19] ;
unsigned long long int arr_14 [16] [16] ;
short arr_23 [19] [19] [19] [19] [19] [19] ;
long long int arr_24 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)-26543;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 413793423621720748LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = -89540851;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 4145891435U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 953512089;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = 4314300499099882100ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -1143221071;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-6734;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-16437;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (short)30928;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = 17920666579430714307ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (short)18342;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_21 [i_0] [i_1] = 12121952938495755733ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = 14671879413541322483ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)30517;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = -5786222583991439024LL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
