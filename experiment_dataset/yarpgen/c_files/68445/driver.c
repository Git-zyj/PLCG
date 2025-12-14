#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_4 = 435614261;
signed char var_10 = (signed char)-10;
int var_13 = 1472688343;
short var_14 = (short)31156;
unsigned short var_16 = (unsigned short)53662;
unsigned long long int var_17 = 15220583016468453733ULL;
int zero = 0;
unsigned long long int var_19 = 1651096173321440205ULL;
unsigned short var_20 = (unsigned short)3985;
unsigned short var_21 = (unsigned short)2358;
unsigned long long int var_22 = 8983143202357710425ULL;
unsigned short arr_0 [15] ;
unsigned char arr_2 [15] ;
signed char arr_3 [15] ;
int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)62;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 121599542;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
