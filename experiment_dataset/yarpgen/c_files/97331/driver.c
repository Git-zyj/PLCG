#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1710016959944668354LL;
short var_6 = (short)24427;
long long int var_7 = -6124182562148302295LL;
short var_8 = (short)-27096;
unsigned int var_9 = 3351289379U;
short var_13 = (short)-2455;
unsigned int var_16 = 1230424217U;
int zero = 0;
short var_20 = (short)26657;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)1765;
_Bool arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)32310;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 1482348130U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 1482232944U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
