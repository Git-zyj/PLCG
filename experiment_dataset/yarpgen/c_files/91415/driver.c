#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)12236;
unsigned short var_10 = (unsigned short)50111;
int var_12 = -873323201;
unsigned int var_13 = 2475641082U;
unsigned char var_14 = (unsigned char)218;
int zero = 0;
long long int var_17 = -5377147950080397164LL;
int var_18 = 1460291858;
_Bool var_19 = (_Bool)1;
unsigned long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 2515665583533666386ULL;
}

void checksum() {
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
