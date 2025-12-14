#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)93;
unsigned short var_5 = (unsigned short)6638;
int var_6 = -249571285;
_Bool var_7 = (_Bool)1;
short var_10 = (short)-26970;
int zero = 0;
signed char var_11 = (signed char)-55;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)11;
unsigned short var_14 = (unsigned short)37102;
unsigned int arr_1 [16] ;
long long int arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2538174911U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -6242920464850759386LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
