#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned long long int var_2 = 14014281783759678683ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)80;
unsigned long long int var_6 = 9314022462379552819ULL;
signed char var_7 = (signed char)-6;
unsigned int var_8 = 2246918432U;
unsigned long long int var_9 = 17528743091653502721ULL;
int zero = 0;
unsigned long long int var_11 = 7117074883242058086ULL;
signed char var_12 = (signed char)-23;
signed char var_13 = (signed char)-113;
unsigned int arr_4 [20] [20] ;
_Bool arr_6 [20] ;
signed char arr_7 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = 2677850509U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)109;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
