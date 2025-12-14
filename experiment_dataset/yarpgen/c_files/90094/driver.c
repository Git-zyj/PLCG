#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-64;
unsigned long long int var_2 = 13235092744788120782ULL;
unsigned char var_4 = (unsigned char)56;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
long long int var_10 = -2985411913680480320LL;
unsigned int var_14 = 1907199679U;
int zero = 0;
unsigned short var_16 = (unsigned short)117;
unsigned short var_17 = (unsigned short)22056;
unsigned short var_18 = (unsigned short)32829;
short var_19 = (short)-5104;
_Bool arr_0 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
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
