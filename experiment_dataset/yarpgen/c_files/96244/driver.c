#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)187;
unsigned long long int var_6 = 8275918357734029208ULL;
unsigned short var_13 = (unsigned short)4019;
unsigned long long int var_14 = 821050272220767903ULL;
unsigned long long int var_15 = 18390318039532693875ULL;
int zero = 0;
signed char var_17 = (signed char)-97;
unsigned long long int var_18 = 853211609021755891ULL;
long long int var_19 = -7150481721352237434LL;
signed char var_20 = (signed char)6;
unsigned char var_21 = (unsigned char)32;
unsigned long long int var_22 = 11397259726408967199ULL;
long long int arr_0 [22] ;
unsigned int arr_1 [22] [22] ;
unsigned short arr_2 [22] ;
unsigned short arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 4260941659693048634LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 389922873U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)32683;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned short)30279;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
