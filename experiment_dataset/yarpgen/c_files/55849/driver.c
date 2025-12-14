#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4111841616302196723LL;
unsigned long long int var_1 = 13402637391325339454ULL;
unsigned short var_2 = (unsigned short)6945;
_Bool var_4 = (_Bool)1;
int var_7 = 2083635819;
unsigned short var_10 = (unsigned short)33111;
signed char var_13 = (signed char)96;
int zero = 0;
short var_15 = (short)-11851;
signed char var_16 = (signed char)-93;
unsigned char var_17 = (unsigned char)31;
unsigned long long int var_18 = 6880335986416614912ULL;
unsigned char arr_3 [11] [11] ;
short arr_6 [11] [11] [11] ;
signed char arr_7 [11] ;
unsigned int arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)28235;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (signed char)-5;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1201073308U : 1918830179U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
