#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-32095;
signed char var_1 = (signed char)13;
signed char var_2 = (signed char)-108;
unsigned char var_3 = (unsigned char)43;
long long int var_4 = 7405405773219122691LL;
unsigned int var_5 = 25637106U;
signed char var_6 = (signed char)-12;
signed char var_7 = (signed char)101;
unsigned char var_8 = (unsigned char)98;
signed char var_9 = (signed char)55;
long long int var_10 = 8098549432367985721LL;
int zero = 0;
int var_12 = -606234778;
unsigned short var_13 = (unsigned short)43125;
unsigned short var_14 = (unsigned short)36943;
unsigned long long int var_15 = 10588316351676526422ULL;
short var_16 = (short)26275;
signed char arr_1 [10] ;
_Bool arr_2 [10] ;
short arr_4 [10] ;
signed char arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-121;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-29051;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-8;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
