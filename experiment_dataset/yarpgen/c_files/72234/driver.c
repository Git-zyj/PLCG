#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1569;
long long int var_2 = 4274427501327631544LL;
unsigned char var_3 = (unsigned char)97;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 10752997513077844759ULL;
int zero = 0;
unsigned long long int var_14 = 8070329679390363204ULL;
long long int var_15 = 8069112344057334939LL;
_Bool var_16 = (_Bool)0;
unsigned short arr_2 [23] ;
signed char arr_4 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned short)62706;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)73;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
