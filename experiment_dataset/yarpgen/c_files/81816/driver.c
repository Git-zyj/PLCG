#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1882625925U;
unsigned int var_6 = 2678127546U;
short var_9 = (short)17192;
unsigned short var_14 = (unsigned short)40546;
long long int var_15 = 7938670255972043260LL;
unsigned long long int var_17 = 3677541294991560233ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)6;
unsigned long long int var_21 = 7748752447258330245ULL;
int var_22 = -1629140669;
unsigned char var_23 = (unsigned char)132;
unsigned long long int var_24 = 7462713296463019896ULL;
unsigned int var_25 = 1716783165U;
short arr_0 [19] ;
long long int arr_1 [19] [19] ;
unsigned long long int arr_2 [19] ;
short arr_4 [21] [21] ;
_Bool arr_5 [21] ;
unsigned int arr_6 [21] [21] ;
_Bool arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-14393;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 8859900058527794867LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 12287941855807427359ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-19438 : (short)32087;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 2567106841U : 107999663U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
