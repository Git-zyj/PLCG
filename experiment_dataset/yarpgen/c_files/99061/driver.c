#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1360906337U;
short var_3 = (short)10190;
_Bool var_7 = (_Bool)1;
unsigned int var_14 = 3585677932U;
int zero = 0;
unsigned char var_17 = (unsigned char)239;
unsigned char var_18 = (unsigned char)244;
unsigned int arr_1 [17] [17] ;
short arr_2 [17] ;
unsigned short arr_3 [17] ;
int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 3393801632U : 3816354326U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-30310 : (short)-356;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27899 : (unsigned short)51845;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1742276928 : 1868605019;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
