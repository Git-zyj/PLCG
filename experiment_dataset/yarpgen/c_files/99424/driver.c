#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 311475829;
unsigned char var_2 = (unsigned char)8;
unsigned char var_4 = (unsigned char)148;
int var_7 = 1246099995;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)-75;
short var_12 = (short)-20427;
int var_13 = 103025179;
_Bool var_14 = (_Bool)1;
int arr_1 [23] [23] ;
signed char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 356997416;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)-31;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
