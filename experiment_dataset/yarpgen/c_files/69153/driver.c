#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3976148362U;
unsigned short var_1 = (unsigned short)57405;
unsigned int var_2 = 1540620137U;
unsigned short var_3 = (unsigned short)24943;
signed char var_4 = (signed char)93;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 2236593094U;
int var_9 = 1020399036;
int zero = 0;
unsigned char var_10 = (unsigned char)179;
int var_11 = 492674103;
signed char var_12 = (signed char)44;
unsigned long long int var_13 = 1528514724007117674ULL;
long long int var_14 = 7399379941937588655LL;
unsigned int arr_0 [19] [19] ;
_Bool arr_9 [19] ;
signed char arr_13 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 3779867854U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)96 : (signed char)69;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
