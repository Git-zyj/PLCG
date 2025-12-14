#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16613;
short var_1 = (short)-11878;
_Bool var_2 = (_Bool)0;
short var_4 = (short)-323;
signed char var_5 = (signed char)36;
_Bool var_6 = (_Bool)1;
short var_7 = (short)-28804;
unsigned char var_8 = (unsigned char)116;
int zero = 0;
unsigned long long int var_10 = 4982804989302416276ULL;
unsigned int var_11 = 3897112002U;
unsigned short var_12 = (unsigned short)63109;
int var_13 = 1997222839;
unsigned short arr_2 [19] ;
int arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)49938;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1709264578;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
