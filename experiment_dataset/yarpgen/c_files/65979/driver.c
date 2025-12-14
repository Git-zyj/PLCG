#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36747;
int var_4 = 176696460;
long long int var_5 = -6477363460660320262LL;
unsigned short var_7 = (unsigned short)6903;
unsigned char var_11 = (unsigned char)189;
unsigned char var_13 = (unsigned char)222;
int zero = 0;
unsigned char var_14 = (unsigned char)67;
signed char var_15 = (signed char)117;
unsigned char var_16 = (unsigned char)11;
short var_17 = (short)-8679;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
_Bool arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned short arr_3 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 9721068558131038838ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1031182148U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)58975;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
