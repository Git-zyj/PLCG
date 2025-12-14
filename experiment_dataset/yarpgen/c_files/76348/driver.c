#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2947285051373418540ULL;
unsigned long long int var_6 = 5397126993156640499ULL;
unsigned char var_7 = (unsigned char)65;
unsigned int var_8 = 1971691784U;
int zero = 0;
unsigned char var_13 = (unsigned char)78;
long long int var_14 = 958213734120601515LL;
long long int var_15 = -6863135061092568679LL;
unsigned short var_16 = (unsigned short)50512;
_Bool var_17 = (_Bool)1;
signed char arr_2 [15] ;
unsigned char arr_4 [17] [17] ;
short arr_5 [17] [17] ;
long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-13740;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 7098274229023486309LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
