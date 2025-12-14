#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1759331592;
unsigned char var_1 = (unsigned char)119;
unsigned long long int var_4 = 16688269539091188376ULL;
unsigned long long int var_5 = 6218108632012365463ULL;
unsigned long long int var_7 = 7689952876767993139ULL;
signed char var_8 = (signed char)5;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)59248;
int zero = 0;
signed char var_11 = (signed char)1;
unsigned short var_12 = (unsigned short)10984;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 10245457130400224928ULL;
unsigned char arr_0 [14] ;
unsigned long long int arr_2 [14] ;
unsigned long long int arr_5 [14] [14] [14] ;
unsigned short arr_9 [14] [14] ;
unsigned short arr_12 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 17059813636486776345ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 8430917445763723875ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)31055 : (unsigned short)16381;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned short)26916 : (unsigned short)19437;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
