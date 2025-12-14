#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2197887876U;
short var_4 = (short)-9334;
unsigned short var_8 = (unsigned short)29231;
long long int var_13 = 725342871663639916LL;
unsigned char var_15 = (unsigned char)43;
int zero = 0;
int var_19 = 1731937378;
int var_20 = -838821135;
int var_21 = 401299975;
unsigned int var_22 = 2642697956U;
unsigned short var_23 = (unsigned short)36218;
int var_24 = -2026396433;
unsigned char arr_0 [15] ;
_Bool arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
