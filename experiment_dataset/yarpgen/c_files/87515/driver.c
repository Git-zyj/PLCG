#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -162669746;
unsigned char var_4 = (unsigned char)176;
unsigned int var_5 = 2846720755U;
unsigned char var_6 = (unsigned char)136;
int var_7 = 855684766;
unsigned long long int var_9 = 2379352878034330836ULL;
unsigned int var_14 = 1198612853U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned char var_19 = (unsigned char)23;
int var_20 = -268426036;
unsigned long long int var_21 = 9893129919744149891ULL;
_Bool var_22 = (_Bool)1;
int var_23 = -1522746197;
unsigned long long int arr_0 [20] [20] ;
signed char arr_1 [20] [20] ;
unsigned long long int arr_4 [17] ;
unsigned char arr_5 [17] ;
int arr_6 [17] [17] ;
unsigned long long int arr_2 [20] ;
unsigned long long int arr_3 [20] ;
unsigned long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 17483075318220603411ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)7;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3169731933619745168ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = -2023413641;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 501130765702684604ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 6171066985831331441ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 3558255255518376757ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
