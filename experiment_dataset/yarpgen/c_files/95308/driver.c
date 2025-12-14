#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7956273963063320020LL;
unsigned int var_6 = 3383981944U;
int zero = 0;
unsigned long long int var_19 = 3230533430221311778ULL;
short var_20 = (short)10020;
int var_21 = 1219002126;
unsigned short var_22 = (unsigned short)24509;
unsigned short var_23 = (unsigned short)30131;
unsigned long long int var_24 = 14782988402124976108ULL;
int arr_1 [22] ;
signed char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 754539816;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-73;
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
