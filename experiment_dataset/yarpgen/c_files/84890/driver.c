#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)234;
short var_2 = (short)2722;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2100036708885695283LL;
unsigned char var_5 = (unsigned char)153;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 3018847479U;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)159;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_12 = 1984368108;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 275546595U;
signed char var_15 = (signed char)27;
unsigned int var_16 = 4018691413U;
short arr_1 [12] [12] ;
_Bool arr_2 [12] ;
signed char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (short)18735;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)58;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
