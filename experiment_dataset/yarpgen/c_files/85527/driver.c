#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)103;
_Bool var_4 = (_Bool)1;
long long int var_5 = -6323780715339053993LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 6682724951938248912ULL;
unsigned short var_9 = (unsigned short)54791;
int var_12 = -245311175;
unsigned long long int var_15 = 4718921167672298460ULL;
unsigned short var_17 = (unsigned short)65033;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)75;
signed char var_21 = (signed char)31;
unsigned char var_22 = (unsigned char)149;
_Bool var_23 = (_Bool)0;
unsigned int arr_1 [24] ;
unsigned short arr_2 [24] ;
unsigned char arr_5 [24] [24] [24] ;
signed char arr_7 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 543610145U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)8045;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)109;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
