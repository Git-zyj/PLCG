#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16900538690570654522ULL;
unsigned long long int var_1 = 1255371550783944744ULL;
signed char var_2 = (signed char)59;
signed char var_4 = (signed char)-112;
signed char var_5 = (signed char)-49;
unsigned long long int var_7 = 18106578900432351774ULL;
unsigned long long int var_8 = 13607637598836724615ULL;
unsigned int var_10 = 268962647U;
signed char var_11 = (signed char)-21;
int zero = 0;
unsigned long long int var_12 = 17335377254136705877ULL;
signed char var_13 = (signed char)-10;
unsigned int var_14 = 1966841652U;
signed char var_15 = (signed char)-103;
unsigned long long int var_16 = 16503202283922618466ULL;
unsigned long long int var_17 = 15652865295875458059ULL;
signed char arr_2 [24] [24] [24] ;
unsigned int arr_3 [24] ;
signed char arr_4 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 442069058U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)112 : (signed char)122;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
