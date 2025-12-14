#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)86;
unsigned int var_5 = 1733506110U;
signed char var_6 = (signed char)-81;
unsigned long long int var_9 = 11232514362913409904ULL;
short var_10 = (short)17640;
unsigned long long int var_14 = 6840392174015209703ULL;
int zero = 0;
short var_16 = (short)24957;
_Bool var_17 = (_Bool)1;
long long int var_18 = -8859389968978406973LL;
unsigned int var_19 = 57804986U;
signed char var_20 = (signed char)-48;
unsigned long long int arr_7 [22] ;
unsigned long long int arr_10 [10] ;
unsigned long long int arr_11 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8961907945843474087ULL : 11398378779861632072ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = 6367265236001038634ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = 13275572320090950070ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
