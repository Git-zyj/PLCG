#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3900236935U;
unsigned short var_2 = (unsigned short)32926;
unsigned char var_3 = (unsigned char)235;
unsigned int var_5 = 2599766362U;
unsigned char var_7 = (unsigned char)190;
unsigned char var_9 = (unsigned char)206;
unsigned short var_10 = (unsigned short)7335;
int zero = 0;
unsigned short var_11 = (unsigned short)54673;
unsigned char var_12 = (unsigned char)31;
long long int var_13 = 4749611513768091915LL;
unsigned int var_14 = 3687658280U;
unsigned int var_15 = 792029708U;
unsigned long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
unsigned long long int arr_2 [24] ;
unsigned int arr_5 [24] [24] [24] ;
unsigned long long int arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11361237498369546810ULL : 17448265637097165941ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)39350 : (unsigned short)29310;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9273456229094458116ULL : 10134753603695092012ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 478903705U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 4026927068788014382ULL : 8210378034679877644ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
