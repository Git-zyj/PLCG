#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -136847414654939867LL;
unsigned short var_1 = (unsigned short)21255;
unsigned long long int var_2 = 2263644574154866977ULL;
unsigned long long int var_4 = 10855604063846766720ULL;
unsigned long long int var_5 = 8682118260708273238ULL;
unsigned long long int var_6 = 14044761332454686173ULL;
unsigned int var_7 = 2507772798U;
unsigned short var_8 = (unsigned short)58187;
unsigned short var_9 = (unsigned short)10108;
unsigned long long int var_10 = 175641365228876114ULL;
unsigned long long int var_11 = 11354886960308264185ULL;
unsigned short var_12 = (unsigned short)45254;
unsigned long long int var_13 = 9690113567676377836ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)41911;
unsigned char var_15 = (unsigned char)92;
unsigned long long int var_16 = 4904077158128309116ULL;
long long int var_17 = 5738230601680444171LL;
short var_18 = (short)-11868;
unsigned short var_19 = (unsigned short)10221;
long long int arr_3 [17] ;
unsigned long long int arr_6 [17] ;
unsigned short arr_9 [17] ;
unsigned short arr_11 [17] ;
unsigned int arr_12 [17] [17] ;
_Bool arr_15 [17] [17] ;
long long int arr_16 [17] ;
unsigned int arr_17 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = -1529784378835184957LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 7001665999590545918ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)51399;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)56051;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = 2811811964U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 1026875369450520130LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_17 [i_0] [i_1] = 3401040478U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
