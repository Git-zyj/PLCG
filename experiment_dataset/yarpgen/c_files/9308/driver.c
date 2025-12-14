#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)18905;
unsigned long long int var_1 = 2207293851038450883ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 16918661757117740853ULL;
short var_5 = (short)27273;
signed char var_8 = (signed char)2;
_Bool var_9 = (_Bool)0;
unsigned int var_11 = 1157550995U;
unsigned short var_12 = (unsigned short)17301;
unsigned short var_14 = (unsigned short)30513;
int zero = 0;
unsigned int var_15 = 2362601081U;
long long int var_16 = 8820319132498295568LL;
signed char var_17 = (signed char)65;
unsigned short var_18 = (unsigned short)17335;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)7131;
unsigned int arr_2 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 3870654175U;
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
