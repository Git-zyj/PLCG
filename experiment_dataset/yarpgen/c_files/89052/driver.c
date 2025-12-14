#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1441268993U;
unsigned long long int var_3 = 15371789504926571699ULL;
unsigned short var_6 = (unsigned short)55051;
unsigned long long int var_8 = 11685052029548486059ULL;
unsigned long long int var_9 = 15459932639285657762ULL;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 14426625U;
unsigned char var_18 = (unsigned char)217;
int var_19 = -26887476;
long long int var_20 = -2348402782609505918LL;
long long int arr_2 [21] ;
signed char arr_3 [21] [21] ;
unsigned char arr_4 [21] [21] ;
signed char arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -2559834269371648413LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (signed char)-42;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
