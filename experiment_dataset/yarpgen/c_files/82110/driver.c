#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10241;
unsigned char var_1 = (unsigned char)209;
unsigned char var_2 = (unsigned char)133;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)168;
unsigned int var_8 = 1145617601U;
long long int var_10 = -8089962512351374125LL;
int zero = 0;
unsigned int var_11 = 245928936U;
signed char var_12 = (signed char)119;
unsigned long long int var_13 = 4144751827361727717ULL;
signed char var_14 = (signed char)-88;
long long int var_15 = 7291518244259145456LL;
unsigned int var_16 = 2295983300U;
unsigned char var_17 = (unsigned char)27;
unsigned char arr_1 [19] ;
_Bool arr_3 [19] [19] [19] ;
unsigned int arr_6 [20] ;
short arr_7 [20] ;
_Bool arr_5 [19] ;
unsigned char arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 1995026869U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (short)18251;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned char)131;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
