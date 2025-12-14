#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56250;
_Bool var_5 = (_Bool)0;
short var_11 = (short)-30464;
int zero = 0;
short var_20 = (short)10587;
unsigned short var_21 = (unsigned short)4273;
unsigned long long int var_22 = 8134486552458434491ULL;
unsigned long long int var_23 = 8481886937191699145ULL;
unsigned int var_24 = 2199751334U;
unsigned long long int var_25 = 8978973140984817521ULL;
unsigned char var_26 = (unsigned char)172;
unsigned short var_27 = (unsigned short)51164;
unsigned char var_28 = (unsigned char)52;
unsigned char arr_0 [20] ;
unsigned short arr_1 [20] ;
_Bool arr_2 [21] ;
_Bool arr_7 [24] ;
short arr_5 [21] [21] ;
unsigned int arr_6 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)59782;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-24835;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 3722372070U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
