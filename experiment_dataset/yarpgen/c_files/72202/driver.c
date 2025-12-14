#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2189748441817236541ULL;
long long int var_1 = 340959058844431504LL;
signed char var_2 = (signed char)19;
signed char var_4 = (signed char)75;
unsigned char var_9 = (unsigned char)49;
_Bool var_10 = (_Bool)1;
signed char var_12 = (signed char)38;
int zero = 0;
unsigned long long int var_13 = 11632288646411634921ULL;
unsigned long long int var_14 = 10200064089571459124ULL;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)107;
signed char arr_0 [16] ;
int arr_1 [16] [16] ;
long long int arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-71 : (signed char)3;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? -832368959 : -1229416986;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? -2195288885364825328LL : -7985456780717559249LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
