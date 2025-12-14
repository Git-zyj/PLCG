#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1258215297;
unsigned short var_4 = (unsigned short)20839;
int zero = 0;
signed char var_11 = (signed char)-107;
signed char var_12 = (signed char)94;
long long int var_13 = 4612112869586079387LL;
unsigned short var_14 = (unsigned short)3142;
unsigned short var_15 = (unsigned short)62703;
long long int var_16 = -5137305451035789274LL;
unsigned int var_17 = 3848722173U;
int var_18 = 409389129;
unsigned int var_19 = 2935696950U;
unsigned int arr_6 [11] [11] [11] ;
long long int arr_8 [24] ;
signed char arr_9 [24] ;
unsigned int arr_10 [24] ;
int arr_19 [14] ;
long long int arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 663586419U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = 7268823245893613824LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 334192363U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = -426360207;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 6069119184317683813LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
