#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
_Bool var_2 = (_Bool)0;
int var_4 = 1269814777;
short var_6 = (short)-23789;
unsigned char var_7 = (unsigned char)246;
signed char var_9 = (signed char)-58;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
long long int var_13 = -3038847135009140852LL;
long long int var_14 = -7265288618677840114LL;
long long int var_15 = 789593812171134589LL;
int var_16 = -1206578666;
short var_17 = (short)2683;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)21462;
_Bool var_20 = (_Bool)1;
unsigned int arr_0 [10] [10] ;
long long int arr_1 [10] ;
unsigned short arr_2 [18] ;
unsigned char arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 4222241503U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -7219785821306866112LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned short)59520;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
