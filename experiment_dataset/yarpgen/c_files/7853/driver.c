#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)111;
long long int var_2 = -1785551198304876113LL;
unsigned long long int var_6 = 1989427765206741357ULL;
long long int var_7 = 4036044806396879808LL;
long long int var_11 = 2296079584131115992LL;
int var_12 = -1756754211;
signed char var_14 = (signed char)-68;
int zero = 0;
signed char var_15 = (signed char)-114;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)152;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3050838752U;
long long int var_20 = 8284573583077936316LL;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_1 [10] ;
unsigned long long int arr_5 [13] ;
unsigned long long int arr_6 [13] [13] ;
long long int arr_8 [21] ;
signed char arr_3 [10] ;
int arr_4 [10] ;
long long int arr_7 [13] [13] ;
_Bool arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 9244491625623816352ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 14990051930045070390ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 13368769776040967413ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 798962705250745964LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1782643316;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_7 [i_0] [i_1] = -6400559459927442669LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
