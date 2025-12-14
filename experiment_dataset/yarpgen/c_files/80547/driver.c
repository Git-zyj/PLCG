#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)-12994;
short var_6 = (short)15677;
unsigned short var_7 = (unsigned short)176;
short var_9 = (short)27306;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 4298709445580010411ULL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 9119363987366336902ULL;
int var_16 = -1005818812;
unsigned int var_17 = 2575581186U;
unsigned char arr_3 [20] ;
signed char arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-74;
}

void checksum() {
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
