#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)21785;
unsigned char var_4 = (unsigned char)51;
signed char var_9 = (signed char)121;
int zero = 0;
unsigned short var_16 = (unsigned short)36481;
unsigned int var_17 = 2510403346U;
_Bool var_18 = (_Bool)1;
unsigned int arr_0 [23] ;
unsigned char arr_1 [23] ;
unsigned char arr_2 [23] ;
unsigned short arr_3 [23] [23] ;
_Bool arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 4272919875U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)56876 : (unsigned short)16428;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
