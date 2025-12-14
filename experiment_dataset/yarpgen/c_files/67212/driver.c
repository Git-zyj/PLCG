#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1785249428;
long long int var_2 = 5795707453793998989LL;
unsigned short var_3 = (unsigned short)36947;
unsigned long long int var_5 = 4596740342980915523ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 15137630248621011232ULL;
short var_9 = (short)12884;
long long int var_12 = 2612601997859163501LL;
int zero = 0;
unsigned long long int var_13 = 2358244563663072412ULL;
unsigned long long int var_14 = 18399671607875015552ULL;
unsigned int var_15 = 798243007U;
unsigned short var_16 = (unsigned short)35031;
signed char var_17 = (signed char)-54;
short var_18 = (short)29955;
int var_19 = -1110773896;
unsigned long long int arr_2 [14] [14] [14] ;
unsigned int arr_4 [14] [14] ;
_Bool arr_5 [14] ;
int arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 526371529918634299ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 1262618726U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = 913684446;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
