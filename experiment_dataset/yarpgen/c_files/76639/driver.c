#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)124;
unsigned long long int var_5 = 4237766527150673415ULL;
short var_8 = (short)-23743;
int var_9 = -2006983732;
signed char var_10 = (signed char)42;
short var_15 = (short)11924;
unsigned char var_16 = (unsigned char)50;
long long int var_18 = 5730380222293054904LL;
int zero = 0;
long long int var_20 = 3834473127529890284LL;
short var_21 = (short)1832;
short var_22 = (short)22580;
unsigned long long int var_23 = 8796532039258985140ULL;
unsigned char var_24 = (unsigned char)94;
unsigned long long int arr_0 [15] ;
short arr_1 [15] ;
unsigned char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 4034610357714257333ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-14873;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (unsigned char)194;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
