#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 5717259380091338334ULL;
signed char var_4 = (signed char)112;
short var_5 = (short)17942;
signed char var_6 = (signed char)32;
long long int var_7 = -1851269299924053793LL;
long long int var_9 = 2920633891575487081LL;
short var_10 = (short)921;
signed char var_12 = (signed char)-87;
unsigned short var_13 = (unsigned short)29185;
int zero = 0;
unsigned char var_14 = (unsigned char)73;
unsigned short var_15 = (unsigned short)24428;
unsigned short var_16 = (unsigned short)44681;
_Bool arr_10 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
