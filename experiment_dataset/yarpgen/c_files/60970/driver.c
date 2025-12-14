#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)24;
long long int var_2 = -1330819253961431437LL;
unsigned long long int var_4 = 14783723400554633561ULL;
int var_7 = 1821317323;
unsigned char var_8 = (unsigned char)83;
unsigned char var_9 = (unsigned char)221;
unsigned short var_11 = (unsigned short)1129;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)105;
signed char var_14 = (signed char)20;
short var_15 = (short)-3228;
unsigned int var_16 = 2631677280U;
signed char var_17 = (signed char)-10;
short var_18 = (short)13874;
short arr_0 [20] ;
unsigned int arr_1 [20] ;
int arr_3 [16] ;
int arr_4 [16] [16] ;
unsigned int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-25756;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 4188275309U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = -665937191;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2005710215;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2869706573U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
