#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47285;
int var_3 = -806444049;
unsigned int var_4 = 883568459U;
unsigned short var_7 = (unsigned short)46486;
signed char var_8 = (signed char)65;
long long int var_10 = -8061028447842650969LL;
unsigned long long int var_11 = 4415979289741634284ULL;
unsigned int var_13 = 2924112321U;
int zero = 0;
unsigned short var_14 = (unsigned short)63657;
unsigned short var_15 = (unsigned short)57556;
unsigned int var_16 = 3194652698U;
unsigned long long int var_17 = 3637980213148412528ULL;
unsigned short var_18 = (unsigned short)37788;
unsigned long long int var_19 = 17222191532191037151ULL;
unsigned char var_20 = (unsigned char)206;
unsigned int arr_0 [24] [24] ;
unsigned long long int arr_1 [24] ;
unsigned int arr_2 [24] ;
unsigned int arr_3 [24] [24] ;
unsigned int arr_6 [12] ;
long long int arr_9 [19] ;
signed char arr_4 [24] [24] ;
unsigned long long int arr_7 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 147408153U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 13151618574710728911ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 1241706890U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 4172392800U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 3339997461U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = -8602186419710712150LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 4922765719623291371ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
