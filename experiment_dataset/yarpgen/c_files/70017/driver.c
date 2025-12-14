#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_4 = (unsigned char)23;
_Bool var_8 = (_Bool)0;
unsigned long long int var_10 = 14714509141233401195ULL;
int zero = 0;
unsigned int var_13 = 2623103438U;
unsigned long long int var_14 = 15150245045982765123ULL;
unsigned int var_15 = 4193968716U;
unsigned short var_16 = (unsigned short)20443;
unsigned int var_17 = 1376883777U;
unsigned int arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 620695749U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
