#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 5790360456231049241LL;
unsigned short var_6 = (unsigned short)51799;
int var_12 = 1899858733;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_16 = 1184976557U;
unsigned char var_18 = (unsigned char)192;
int zero = 0;
short var_20 = (short)-3223;
short var_21 = (short)23182;
long long int var_22 = 574827431152850043LL;
int var_23 = -1028291798;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)15;
_Bool arr_0 [16] ;
unsigned long long int arr_2 [16] [16] ;
_Bool arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 13454224448762222227ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
