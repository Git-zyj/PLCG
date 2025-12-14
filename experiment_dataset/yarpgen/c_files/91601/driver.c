#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 894694077;
short var_3 = (short)-16933;
unsigned int var_5 = 3399368387U;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)138;
unsigned int var_12 = 4053338681U;
int zero = 0;
unsigned int var_14 = 391419384U;
unsigned int var_15 = 2997609787U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)27321;
unsigned long long int var_18 = 12933617080718905297ULL;
long long int arr_0 [12] ;
unsigned int arr_1 [12] [12] ;
_Bool arr_4 [11] ;
int arr_6 [11] [11] ;
unsigned short arr_2 [12] ;
_Bool arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -3088817525275309917LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 3039080987U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = -1670300307;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)64373;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
