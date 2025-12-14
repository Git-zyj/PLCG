#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14967351267019101491ULL;
long long int var_2 = -4486748754128147832LL;
unsigned int var_3 = 3846911122U;
unsigned char var_4 = (unsigned char)58;
signed char var_6 = (signed char)53;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)35375;
short var_10 = (short)24832;
int zero = 0;
unsigned int var_11 = 2902495811U;
signed char var_12 = (signed char)-91;
short var_13 = (short)-10699;
unsigned short var_14 = (unsigned short)25549;
unsigned long long int var_15 = 17151595854417530027ULL;
int arr_0 [12] ;
signed char arr_1 [12] [12] ;
unsigned short arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -28691423;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-33;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (unsigned short)39936;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
