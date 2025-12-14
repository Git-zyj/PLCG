#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6200803701103064828ULL;
unsigned short var_2 = (unsigned short)46274;
unsigned int var_3 = 3088327581U;
unsigned short var_4 = (unsigned short)51696;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1180460893518461684ULL;
unsigned int var_7 = 1407367970U;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 862948675U;
long long int var_12 = -6111431445772588899LL;
int zero = 0;
long long int var_16 = 6579878114992452606LL;
short var_17 = (short)-21197;
int var_18 = -20352710;
signed char var_19 = (signed char)38;
short var_20 = (short)16091;
unsigned int arr_0 [15] ;
unsigned int arr_3 [15] ;
signed char arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 709171626U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 1660277734U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-42;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
