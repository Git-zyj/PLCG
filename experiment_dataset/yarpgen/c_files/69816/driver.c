#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
short var_11 = (short)-7902;
unsigned long long int var_18 = 15935988141436709263ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8546350267751928751LL;
unsigned long long int var_21 = 2595955258126307495ULL;
unsigned char var_22 = (unsigned char)100;
short var_23 = (short)-31113;
unsigned short arr_3 [15] ;
unsigned long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned short)60858;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 7398210621894671340ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
