#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)11661;
_Bool var_3 = (_Bool)1;
long long int var_5 = 8223198878875194271LL;
signed char var_6 = (signed char)61;
unsigned char var_7 = (unsigned char)38;
unsigned int var_8 = 3030277957U;
unsigned long long int var_9 = 2911675216600980304ULL;
unsigned long long int var_14 = 13607579749390474810ULL;
int zero = 0;
long long int var_15 = -5386844508840575510LL;
unsigned char var_16 = (unsigned char)236;
unsigned short var_17 = (unsigned short)50877;
unsigned short var_18 = (unsigned short)46724;
unsigned char var_19 = (unsigned char)198;
unsigned int var_20 = 2322052645U;
unsigned short var_21 = (unsigned short)62530;
unsigned long long int var_22 = 17623001370764432859ULL;
unsigned short var_23 = (unsigned short)34770;
unsigned int var_24 = 2242199939U;
unsigned long long int var_25 = 6400033132437756275ULL;
unsigned int arr_0 [11] [11] ;
unsigned short arr_3 [24] ;
int arr_4 [24] ;
unsigned char arr_5 [24] ;
unsigned long long int arr_8 [24] ;
signed char arr_9 [24] [24] ;
_Bool arr_13 [24] ;
unsigned char arr_18 [24] [24] [24] [24] ;
unsigned int arr_6 [24] ;
unsigned int arr_7 [24] ;
unsigned int arr_10 [24] ;
unsigned int arr_11 [24] ;
unsigned long long int arr_12 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 744975237U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned short)52909;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1136125874;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 6064535510817755835ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 3135283599U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 4008946016U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 440855943U : 1918669799U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2594843809U : 3339213747U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1872976588954122797ULL : 15157257946725593212ULL;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
