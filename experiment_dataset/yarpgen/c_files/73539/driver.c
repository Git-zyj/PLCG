#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)100;
short var_9 = (short)31617;
unsigned short var_13 = (unsigned short)36893;
int var_15 = 308593799;
unsigned long long int var_19 = 1892545920861591223ULL;
int zero = 0;
unsigned long long int var_20 = 4048505804721189571ULL;
short var_21 = (short)12186;
long long int var_22 = -2261675049685854130LL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)51615;
unsigned long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 18245268281676776917ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 9357261290208782615ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -4487378761858820563LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
