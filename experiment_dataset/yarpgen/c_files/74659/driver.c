#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62777;
unsigned short var_2 = (unsigned short)37651;
unsigned short var_4 = (unsigned short)46607;
unsigned char var_5 = (unsigned char)193;
unsigned char var_7 = (unsigned char)230;
int zero = 0;
short var_11 = (short)21699;
signed char var_12 = (signed char)4;
short var_13 = (short)27114;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2727103736U;
unsigned int arr_1 [24] ;
int arr_5 [24] [24] ;
unsigned int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 440422261U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = -842212055;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 1023933132U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
