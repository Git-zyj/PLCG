#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2316360938U;
int zero = 0;
unsigned long long int var_10 = 10778462472354006506ULL;
long long int var_11 = 6534826206031236771LL;
unsigned int var_12 = 4067848466U;
unsigned int var_13 = 1586724249U;
long long int var_14 = 699179806512307273LL;
signed char var_15 = (signed char)-34;
unsigned long long int var_16 = 830158989993353024ULL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3314236096U;
long long int var_19 = -1862816147788663083LL;
_Bool arr_0 [13] [13] ;
unsigned short arr_1 [13] ;
unsigned short arr_3 [22] [22] ;
unsigned int arr_4 [22] [22] ;
_Bool arr_5 [10] [10] ;
signed char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned short)15001;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)1512;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = 874697057U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)102;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
