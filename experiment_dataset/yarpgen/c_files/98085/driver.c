#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1840493892U;
int var_3 = 1422158971;
unsigned int var_4 = 452747482U;
signed char var_5 = (signed char)-90;
_Bool var_8 = (_Bool)0;
int zero = 0;
long long int var_10 = -3493186956859229590LL;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2294199679U;
unsigned short var_13 = (unsigned short)57467;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)35487;
int var_16 = 474326770;
unsigned int arr_0 [21] ;
_Bool arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 4006555514U : 3596389224U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
