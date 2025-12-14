#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43169;
_Bool var_3 = (_Bool)0;
unsigned int var_4 = 1849192368U;
unsigned int var_6 = 319656553U;
short var_8 = (short)11931;
int var_9 = -1487738331;
_Bool var_11 = (_Bool)0;
long long int var_12 = 3051576152106469954LL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2908585976U;
unsigned int var_15 = 2753305771U;
unsigned char var_16 = (unsigned char)179;
unsigned char var_17 = (unsigned char)212;
int zero = 0;
unsigned char var_18 = (unsigned char)190;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)93;
long long int arr_0 [12] ;
unsigned long long int arr_1 [12] [12] ;
int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2543831815052004315LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = 9585596398066667578ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -954991689;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
