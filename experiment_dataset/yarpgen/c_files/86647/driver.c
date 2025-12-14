#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17490;
long long int var_4 = -5384639740779078712LL;
unsigned long long int var_6 = 17473302345967417399ULL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)19617;
unsigned short var_12 = (unsigned short)42109;
_Bool var_14 = (_Bool)0;
long long int var_16 = -2401328916680242088LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2315361469U;
unsigned long long int var_19 = 8808065345268429927ULL;
_Bool var_20 = (_Bool)0;
unsigned short arr_2 [25] ;
signed char arr_4 [25] ;
unsigned short arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)47184;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned short)36133;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
