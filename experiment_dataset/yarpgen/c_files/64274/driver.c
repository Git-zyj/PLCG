#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_2 = (short)31971;
signed char var_4 = (signed char)-48;
short var_5 = (short)-24642;
_Bool var_7 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)223;
int zero = 0;
unsigned long long int var_11 = 4987574567926896344ULL;
unsigned char var_12 = (unsigned char)208;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)0;
short arr_0 [19] ;
unsigned short arr_1 [19] ;
signed char arr_9 [19] [19] [19] [19] ;
short arr_13 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)-19067;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)50534;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-18 : (signed char)93;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (short)22490;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
