#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 842530808584945138ULL;
unsigned char var_3 = (unsigned char)159;
int var_4 = 684630089;
short var_6 = (short)15122;
_Bool var_8 = (_Bool)1;
int var_9 = -616716380;
int var_10 = -313961776;
signed char var_12 = (signed char)21;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-1493;
int zero = 0;
unsigned long long int var_15 = 17202334976163581375ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10619158719079068169ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3234285290U;
unsigned int var_20 = 3255189854U;
unsigned long long int arr_0 [12] ;
short arr_3 [20] [20] ;
_Bool arr_4 [20] [20] ;
unsigned int arr_5 [20] [20] ;
signed char arr_2 [12] ;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 12519186533647684073ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-11392;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = 3051632238U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1318544508;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
