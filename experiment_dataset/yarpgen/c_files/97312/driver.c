#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-21621;
unsigned short var_6 = (unsigned short)49799;
unsigned short var_7 = (unsigned short)4963;
int zero = 0;
signed char var_14 = (signed char)72;
unsigned short var_15 = (unsigned short)35778;
unsigned int var_16 = 2488996142U;
_Bool var_17 = (_Bool)1;
long long int var_18 = 8618280119196362477LL;
short var_19 = (short)25806;
signed char arr_0 [23] ;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)47 : (signed char)100;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 10628794083796049833ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
