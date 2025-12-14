#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1610631206;
unsigned long long int var_2 = 13639232189964029934ULL;
unsigned short var_4 = (unsigned short)15963;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)26;
int var_13 = 1148317273;
unsigned long long int var_14 = 17585746762269946907ULL;
int zero = 0;
short var_16 = (short)21647;
unsigned long long int var_17 = 10531004271880442839ULL;
unsigned long long int var_18 = 11084541161349673684ULL;
unsigned int var_19 = 4089377401U;
unsigned char var_20 = (unsigned char)147;
unsigned short var_21 = (unsigned short)62879;
signed char var_22 = (signed char)-77;
signed char arr_2 [23] [23] ;
unsigned long long int arr_5 [23] ;
_Bool arr_18 [10] [10] ;
unsigned int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 3824633490907920153ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 275484182U;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
