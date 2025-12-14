#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7972366921014510510ULL;
unsigned int var_4 = 122898757U;
signed char var_9 = (signed char)94;
unsigned long long int var_10 = 1940411859091142951ULL;
long long int var_13 = 4097867756038917695LL;
unsigned long long int var_16 = 2612591619336863254ULL;
long long int var_17 = -5927595421316252693LL;
int zero = 0;
unsigned char var_19 = (unsigned char)184;
unsigned short var_20 = (unsigned short)61558;
long long int var_21 = 3028542894548578805LL;
unsigned long long int arr_0 [24] ;
unsigned long long int arr_2 [24] [24] ;
unsigned short arr_3 [24] [24] ;
signed char arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 10980320746112029409ULL : 15991160764426243369ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2180785946224670741ULL : 18338088629360618295ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)59140;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)60;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
