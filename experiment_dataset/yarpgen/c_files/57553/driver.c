#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1811079104;
long long int var_9 = -2810858635328660002LL;
long long int var_10 = -1916526231063675613LL;
unsigned char var_13 = (unsigned char)0;
unsigned long long int var_15 = 10143515685788671628ULL;
long long int var_17 = -8046011674234208716LL;
int zero = 0;
int var_19 = 1915930849;
unsigned long long int var_20 = 12549821269020179619ULL;
signed char var_21 = (signed char)102;
_Bool var_22 = (_Bool)0;
int var_23 = -1036968743;
unsigned long long int var_24 = 15106622425317602738ULL;
long long int var_25 = 8257674348376402774LL;
unsigned char arr_4 [23] [23] [23] [23] ;
long long int arr_6 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)234 : (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -7132748474020483904LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
