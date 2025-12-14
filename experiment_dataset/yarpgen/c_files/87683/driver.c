#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -667324129;
unsigned short var_1 = (unsigned short)50477;
unsigned long long int var_2 = 6540586395544218100ULL;
short var_3 = (short)-29991;
short var_4 = (short)-12381;
unsigned long long int var_5 = 10932154617785056783ULL;
int var_10 = 1791169513;
signed char var_11 = (signed char)73;
int zero = 0;
unsigned int var_15 = 1219295399U;
unsigned int var_16 = 3297879481U;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)64;
_Bool var_19 = (_Bool)1;
long long int arr_0 [11] ;
int arr_1 [11] ;
unsigned short arr_2 [11] [11] ;
short arr_3 [11] ;
unsigned long long int arr_4 [11] ;
unsigned int arr_5 [11] [11] [11] ;
unsigned int arr_8 [11] [11] [11] ;
signed char arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 6877202419311735145LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 1548185461;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)3809;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (short)6636;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 4561913884842988297ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1425419447U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3782748711U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-15;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
