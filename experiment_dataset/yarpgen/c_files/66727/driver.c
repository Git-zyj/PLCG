#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14203203187042439697ULL;
unsigned long long int var_2 = 11299630100351032181ULL;
signed char var_6 = (signed char)4;
unsigned short var_8 = (unsigned short)29980;
long long int var_12 = 4864455007139099591LL;
int zero = 0;
unsigned int var_16 = 3811884440U;
long long int var_17 = -8246776325148626067LL;
unsigned short var_18 = (unsigned short)26230;
long long int arr_3 [12] [12] ;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 7850372361474818783LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)59041;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
