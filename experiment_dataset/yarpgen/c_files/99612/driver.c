#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)24241;
unsigned long long int var_3 = 10492684366351161078ULL;
unsigned int var_5 = 1842367791U;
int var_7 = -1332368134;
unsigned long long int var_9 = 14161692864970410713ULL;
unsigned char var_11 = (unsigned char)137;
int var_14 = -1018638202;
int zero = 0;
unsigned long long int var_15 = 4987862086933331393ULL;
int var_16 = -1727365180;
unsigned char var_17 = (unsigned char)34;
unsigned int var_18 = 2475415953U;
unsigned long long int var_19 = 5975746213135968281ULL;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3484293027U;
unsigned long long int var_22 = 6337449792655242188ULL;
unsigned long long int var_23 = 8885821927472653811ULL;
_Bool arr_0 [13] ;
unsigned int arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
int arr_3 [11] [11] ;
unsigned short arr_4 [11] ;
unsigned long long int arr_6 [20] ;
unsigned long long int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 3679602982U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 17492354064965514131ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -1359919819;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (unsigned short)65467;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 11054179244511392707ULL : 13372703193249786803ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 16502115695457312852ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
