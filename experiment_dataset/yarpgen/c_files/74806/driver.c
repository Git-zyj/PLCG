#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -675020276;
_Bool var_3 = (_Bool)1;
unsigned int var_6 = 4083809246U;
unsigned long long int var_8 = 532942803949955480ULL;
unsigned short var_10 = (unsigned short)28536;
int var_11 = -1689719321;
unsigned long long int var_12 = 8802161236147558447ULL;
unsigned short var_13 = (unsigned short)8467;
unsigned short var_14 = (unsigned short)8862;
int zero = 0;
short var_15 = (short)25578;
short var_16 = (short)-5348;
unsigned long long int var_17 = 9418747859794918494ULL;
unsigned long long int var_18 = 9622066592701616999ULL;
long long int arr_0 [11] ;
_Bool arr_1 [11] ;
unsigned long long int arr_2 [11] ;
signed char arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -8415453028503100925LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 10580998470851195215ULL : 8335539702208821962ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)97 : (signed char)-14;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
