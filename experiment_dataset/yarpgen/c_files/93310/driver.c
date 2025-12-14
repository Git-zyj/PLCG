#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)17;
unsigned short var_2 = (unsigned short)46572;
signed char var_3 = (signed char)107;
long long int var_7 = 791303337308834730LL;
long long int var_11 = 4926746054828780153LL;
unsigned int var_12 = 1095517820U;
unsigned short var_13 = (unsigned short)44994;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 1941231399U;
unsigned char var_17 = (unsigned char)48;
long long int var_18 = 5730541698091141853LL;
long long int var_19 = 9037826311847993015LL;
unsigned char var_20 = (unsigned char)179;
int var_21 = 707878933;
unsigned int arr_0 [17] ;
_Bool arr_1 [17] ;
unsigned short arr_5 [13] [13] ;
short arr_6 [13] ;
int arr_2 [17] [17] ;
unsigned char arr_3 [17] ;
unsigned short arr_4 [17] [17] ;
int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 2110541724U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)64149;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (short)-3711;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = -1616560029;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)50675;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -300426048 : -254462596;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
