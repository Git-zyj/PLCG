#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48576;
long long int var_1 = 6150935417662392057LL;
long long int var_3 = -3084729270335760968LL;
long long int var_4 = 4847818700789955894LL;
unsigned char var_6 = (unsigned char)215;
unsigned int var_7 = 119080901U;
unsigned int var_8 = 1816802310U;
int zero = 0;
long long int var_11 = -2888541744363028868LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 7513760107077330900LL;
unsigned short var_14 = (unsigned short)60478;
unsigned short var_15 = (unsigned short)3502;
unsigned char var_16 = (unsigned char)177;
long long int arr_0 [11] ;
short arr_5 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 417503144928469076LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-6663;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
