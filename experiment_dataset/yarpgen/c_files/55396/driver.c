#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2724598703591255162ULL;
unsigned long long int var_2 = 2994152345516963136ULL;
long long int var_4 = 6071621756852412850LL;
unsigned int var_6 = 1751096273U;
short var_7 = (short)22711;
unsigned int var_10 = 840602173U;
int zero = 0;
unsigned int var_11 = 2382568155U;
unsigned short var_12 = (unsigned short)2978;
unsigned short var_13 = (unsigned short)33488;
unsigned int var_14 = 1973681914U;
unsigned short var_15 = (unsigned short)3468;
unsigned int var_16 = 3517507168U;
int arr_2 [17] [17] ;
unsigned long long int arr_3 [17] ;
_Bool arr_4 [17] [17] ;
signed char arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1017768447;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 10556669067906662557ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-27 : (signed char)64;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
