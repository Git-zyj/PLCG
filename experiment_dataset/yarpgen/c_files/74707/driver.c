#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)58940;
unsigned int var_3 = 4243033335U;
unsigned char var_4 = (unsigned char)106;
unsigned int var_5 = 1406708177U;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)101;
int var_10 = 887891275;
signed char var_11 = (signed char)4;
int zero = 0;
int var_13 = -1184358755;
unsigned int var_14 = 1067100471U;
long long int var_15 = -2811441304142935772LL;
unsigned int var_16 = 2946770433U;
unsigned long long int var_17 = 4944121468975002846ULL;
_Bool arr_0 [10] ;
_Bool arr_1 [10] ;
unsigned int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 490217790U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
