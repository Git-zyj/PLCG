#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42730;
int var_2 = 314181022;
unsigned char var_3 = (unsigned char)119;
unsigned int var_4 = 1167620067U;
unsigned char var_5 = (unsigned char)197;
unsigned char var_8 = (unsigned char)165;
short var_9 = (short)13620;
unsigned short var_10 = (unsigned short)55411;
unsigned char var_12 = (unsigned char)246;
unsigned int var_14 = 2550265631U;
int var_15 = -361015502;
unsigned char var_16 = (unsigned char)184;
signed char var_17 = (signed char)39;
int zero = 0;
long long int var_20 = 1426268326904097668LL;
unsigned int var_21 = 1650613080U;
short var_22 = (short)-282;
unsigned char var_23 = (unsigned char)13;
short var_24 = (short)-18752;
unsigned long long int arr_1 [17] ;
unsigned char arr_4 [17] [17] [17] ;
_Bool arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 4108849527263465105ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
