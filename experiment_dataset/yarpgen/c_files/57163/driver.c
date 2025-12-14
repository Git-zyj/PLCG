#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15570885008839638387ULL;
unsigned char var_1 = (unsigned char)166;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-5028;
unsigned int var_7 = 984769540U;
unsigned short var_9 = (unsigned short)33915;
unsigned short var_10 = (unsigned short)14937;
unsigned int var_13 = 2250726908U;
int zero = 0;
signed char var_14 = (signed char)-71;
unsigned int var_15 = 1896895849U;
signed char var_16 = (signed char)-102;
unsigned char var_17 = (unsigned char)12;
unsigned short arr_0 [17] ;
unsigned long long int arr_1 [17] [17] ;
unsigned short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)53386;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 17508842888096557488ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)32301;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
