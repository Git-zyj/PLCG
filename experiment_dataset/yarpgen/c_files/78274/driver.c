#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3312428308263645657ULL;
int var_9 = 1556799515;
unsigned char var_13 = (unsigned char)54;
signed char var_15 = (signed char)-6;
unsigned char var_16 = (unsigned char)84;
int zero = 0;
signed char var_17 = (signed char)-102;
unsigned long long int var_18 = 219223184376858803ULL;
unsigned short var_19 = (unsigned short)13716;
_Bool arr_1 [11] ;
signed char arr_2 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)31;
}

void checksum() {
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
