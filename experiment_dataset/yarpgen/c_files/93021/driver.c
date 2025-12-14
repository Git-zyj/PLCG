#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
long long int var_1 = -7791168577096213637LL;
long long int var_4 = 5056597254467038537LL;
signed char var_5 = (signed char)-24;
unsigned long long int var_8 = 309690551999324924ULL;
int var_9 = 974961982;
unsigned long long int var_10 = 13666761363473763219ULL;
unsigned char var_11 = (unsigned char)179;
unsigned long long int var_12 = 9329788322545796595ULL;
signed char var_13 = (signed char)81;
int zero = 0;
unsigned short var_15 = (unsigned short)18235;
long long int var_16 = 8428265764158947408LL;
unsigned int var_17 = 4247181453U;
unsigned short var_18 = (unsigned short)14986;
signed char var_19 = (signed char)3;
unsigned int var_20 = 660386716U;
unsigned short arr_1 [19] ;
int arr_7 [19] [19] ;
unsigned char arr_8 [19] ;
signed char arr_4 [19] ;
_Bool arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)48232;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = 583108010;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)-32 : (signed char)90;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
