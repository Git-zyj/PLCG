#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
int var_1 = -674678164;
long long int var_2 = -8399441145226889779LL;
unsigned long long int var_3 = 3103792546120791257ULL;
unsigned char var_4 = (unsigned char)122;
unsigned long long int var_5 = 16623342162600181046ULL;
unsigned char var_6 = (unsigned char)156;
signed char var_7 = (signed char)67;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-4;
long long int var_10 = 8196716732512364513LL;
int zero = 0;
unsigned int var_11 = 1777159294U;
int var_12 = 1121595999;
long long int var_13 = -6700210685922117353LL;
unsigned char var_14 = (unsigned char)0;
unsigned long long int var_15 = 4868834747249858560ULL;
int var_16 = -50826533;
_Bool var_17 = (_Bool)0;
int var_18 = 1306717396;
short arr_3 [19] [19] ;
short arr_4 [19] [19] ;
unsigned char arr_11 [19] ;
signed char arr_12 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)25223 : (short)-21258;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)5348 : (short)-7665;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (signed char)-67;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
