#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)27265;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-5;
signed char var_6 = (signed char)70;
signed char var_7 = (signed char)81;
short var_8 = (short)13018;
short var_9 = (short)-2472;
signed char var_10 = (signed char)-118;
unsigned long long int var_13 = 11113741684136779986ULL;
int zero = 0;
int var_14 = -713478407;
signed char var_15 = (signed char)65;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)39;
short arr_3 [12] [12] ;
unsigned long long int arr_4 [12] ;
short arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-13137;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 17759209081334555854ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = (short)-8698;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
