#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
int var_2 = 2018164597;
short var_7 = (short)-11548;
_Bool var_8 = (_Bool)0;
int var_10 = 538926876;
short var_14 = (short)-13195;
int zero = 0;
short var_16 = (short)18844;
unsigned char var_17 = (unsigned char)244;
long long int arr_2 [18] [18] ;
unsigned char arr_4 [18] [18] [18] ;
long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = -7618186570813062088LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = -3626690623310529443LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
