#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1132423981;
unsigned long long int var_4 = 9468839219644776930ULL;
short var_7 = (short)11600;
unsigned int var_9 = 2377440393U;
short var_10 = (short)12490;
long long int var_12 = 6199370942086940970LL;
short var_13 = (short)23107;
short var_15 = (short)14232;
int zero = 0;
unsigned int var_16 = 2388287535U;
unsigned long long int var_17 = 13931119989113867092ULL;
long long int var_18 = -8124481274557275779LL;
unsigned long long int var_19 = 9860706618069599720ULL;
long long int var_20 = 4744507232291467803LL;
int arr_2 [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
unsigned short arr_6 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = -1892339547;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 17399967944232134938ULL : 6806805794488037990ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)10802 : (unsigned short)30964;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
