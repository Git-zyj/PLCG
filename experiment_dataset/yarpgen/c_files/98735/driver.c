#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5791;
unsigned int var_1 = 2415802310U;
unsigned int var_2 = 1259247421U;
unsigned char var_3 = (unsigned char)253;
short var_4 = (short)20726;
short var_6 = (short)-10280;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)47;
signed char var_14 = (signed char)-94;
unsigned long long int var_15 = 15284984519565932761ULL;
unsigned short var_16 = (unsigned short)60252;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 15442646189755785579ULL;
int arr_0 [19] ;
_Bool arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1579687439;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
