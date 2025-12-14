#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)(-127 - 1);
unsigned char var_7 = (unsigned char)250;
unsigned long long int var_8 = 14630971002996828111ULL;
unsigned char var_9 = (unsigned char)246;
int zero = 0;
signed char var_11 = (signed char)8;
signed char var_12 = (signed char)93;
unsigned long long int var_13 = 5994173342759344337ULL;
unsigned int var_14 = 2779453960U;
short var_15 = (short)3136;
unsigned long long int arr_0 [19] [19] ;
unsigned long long int arr_1 [19] ;
signed char arr_2 [19] ;
unsigned int arr_4 [19] [19] ;
signed char arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 10780793947230087649ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 9891136038558739825ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 2994378938U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-58;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
