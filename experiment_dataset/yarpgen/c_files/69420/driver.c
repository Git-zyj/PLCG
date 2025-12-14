#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7764748645747220394ULL;
signed char var_3 = (signed char)-118;
long long int var_4 = -73152738268836308LL;
unsigned short var_6 = (unsigned short)242;
long long int var_11 = 152045352498847509LL;
int var_19 = -1846118174;
int zero = 0;
unsigned long long int var_20 = 3465210698092223640ULL;
unsigned int var_21 = 1224842202U;
unsigned int var_22 = 3318158089U;
unsigned char var_23 = (unsigned char)132;
int var_24 = 728004650;
unsigned char var_25 = (unsigned char)187;
signed char arr_2 [24] ;
unsigned int arr_6 [16] ;
_Bool arr_3 [24] ;
_Bool arr_7 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = 665844913U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
