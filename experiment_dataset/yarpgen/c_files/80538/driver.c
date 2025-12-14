#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-14;
unsigned short var_2 = (unsigned short)56845;
signed char var_5 = (signed char)73;
unsigned long long int var_6 = 10649681396774395077ULL;
unsigned char var_8 = (unsigned char)158;
int zero = 0;
unsigned short var_10 = (unsigned short)47787;
unsigned long long int var_11 = 12498837117218153727ULL;
unsigned char var_12 = (unsigned char)77;
long long int var_13 = -6024157966472076402LL;
signed char var_14 = (signed char)-88;
unsigned char var_15 = (unsigned char)73;
unsigned short var_16 = (unsigned short)13305;
int arr_1 [14] [14] ;
unsigned char arr_4 [14] ;
_Bool arr_2 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -1563807634;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)134;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
