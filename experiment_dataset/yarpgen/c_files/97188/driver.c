#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3262426003296325658LL;
int var_5 = -1060843712;
long long int var_6 = -6968423203012149982LL;
unsigned long long int var_7 = 4892187793127042718ULL;
int var_8 = 1002601200;
signed char var_10 = (signed char)99;
unsigned int var_11 = 1280809247U;
short var_14 = (short)32610;
int zero = 0;
short var_15 = (short)30081;
unsigned int var_16 = 1310050395U;
unsigned long long int var_17 = 3925931059295894136ULL;
unsigned long long int arr_1 [10] ;
unsigned short arr_2 [10] [10] ;
unsigned short arr_3 [10] ;
long long int arr_4 [10] ;
signed char arr_5 [10] ;
unsigned int arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 10483882782653211445ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)27842;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)57881;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1098198981043616884LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 2271010085U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
