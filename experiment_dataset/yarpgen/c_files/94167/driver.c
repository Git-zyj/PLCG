#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
short var_4 = (short)-17870;
unsigned int var_5 = 1301830436U;
int var_7 = -282315232;
unsigned char var_8 = (unsigned char)159;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 744539459U;
int zero = 0;
int var_15 = 910376655;
long long int var_16 = 1195995636001423792LL;
int var_17 = 628991333;
signed char var_18 = (signed char)77;
unsigned short var_19 = (unsigned short)58385;
int var_20 = -1200402509;
unsigned char arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
short arr_5 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2784778102134953369ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = (short)-18613;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
