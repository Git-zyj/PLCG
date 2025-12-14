#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -347420722;
long long int var_1 = -6427575424944343931LL;
unsigned short var_2 = (unsigned short)53647;
signed char var_3 = (signed char)-76;
unsigned long long int var_4 = 15118033567206794151ULL;
short var_6 = (short)11028;
unsigned short var_7 = (unsigned short)145;
short var_8 = (short)30618;
int zero = 0;
unsigned long long int var_15 = 7279775490811736499ULL;
short var_16 = (short)18000;
unsigned long long int var_17 = 9642048828661784420ULL;
long long int var_18 = 5174269286168626790LL;
int var_19 = -1026930538;
int var_20 = 46726795;
long long int arr_0 [10] ;
int arr_1 [10] ;
unsigned char arr_4 [25] [25] ;
short arr_5 [25] ;
short arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -4391809035413549952LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -1691894024;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)-2623;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)29894;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
