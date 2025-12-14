#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)105;
signed char var_4 = (signed char)-114;
long long int var_7 = -8191771882792568202LL;
unsigned int var_9 = 1125622098U;
unsigned int var_10 = 1437596689U;
signed char var_11 = (signed char)43;
signed char var_12 = (signed char)96;
int var_13 = -1646633822;
_Bool var_14 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)22;
signed char var_22 = (signed char)-30;
unsigned long long int var_23 = 5187654095736524066ULL;
unsigned char arr_0 [12] ;
unsigned int arr_3 [12] ;
unsigned char arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 1616374102U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)59;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
