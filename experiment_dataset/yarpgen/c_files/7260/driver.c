#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 9510843996282877737ULL;
long long int var_3 = -7387020796513546226LL;
long long int var_5 = -412761366231314585LL;
signed char var_6 = (signed char)18;
unsigned long long int var_7 = 1120873617476198926ULL;
_Bool var_8 = (_Bool)0;
int var_10 = 1335300843;
int var_11 = -23076123;
unsigned long long int var_12 = 8818544076596802630ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_15 = 6532111868022510760LL;
unsigned int var_16 = 1518340937U;
signed char var_17 = (signed char)54;
int arr_0 [16] ;
signed char arr_1 [16] [16] ;
unsigned int arr_2 [16] ;
signed char arr_3 [16] ;
signed char arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 1030495895;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)62;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2479628350U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)8;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)-45;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
