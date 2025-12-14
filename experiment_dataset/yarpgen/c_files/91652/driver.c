#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15705293672857174333ULL;
signed char var_4 = (signed char)97;
long long int var_5 = 1745429606914390903LL;
long long int var_8 = 324891997141494433LL;
long long int var_13 = -1783339147728723396LL;
unsigned short var_16 = (unsigned short)22088;
int var_19 = -997760710;
int zero = 0;
short var_20 = (short)3670;
signed char var_21 = (signed char)28;
unsigned char var_22 = (unsigned char)218;
unsigned char var_23 = (unsigned char)234;
unsigned int arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned int arr_2 [23] ;
long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 3411547314U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3469400599603506113LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 1916138060U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7045097030574497072LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
