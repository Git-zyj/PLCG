#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
long long int var_3 = -7635694113241790785LL;
unsigned long long int var_5 = 3632050523742037464ULL;
unsigned int var_6 = 2566098538U;
unsigned short var_7 = (unsigned short)9514;
int var_11 = 1843261997;
int zero = 0;
int var_12 = 740451234;
signed char var_13 = (signed char)119;
unsigned char var_14 = (unsigned char)132;
unsigned long long int var_15 = 9679968806666558718ULL;
unsigned long long int var_16 = 3147862672147028080ULL;
int arr_1 [16] ;
_Bool arr_5 [16] ;
unsigned int arr_6 [16] [16] [16] ;
unsigned int arr_10 [16] ;
unsigned int arr_11 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 603164423;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 329609755U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 3198234452U : 2952354394U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_11 [i_0] = 2192039814U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
