#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10570;
unsigned long long int var_3 = 8028101325907451465ULL;
int var_6 = 123478617;
short var_8 = (short)-14484;
int var_9 = -262271253;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)246;
unsigned char var_16 = (unsigned char)188;
short var_17 = (short)-19435;
int zero = 0;
int var_18 = 383649956;
_Bool var_19 = (_Bool)0;
long long int var_20 = 4873378574003640755LL;
unsigned int var_21 = 1836553344U;
signed char var_22 = (signed char)17;
short var_23 = (short)9869;
unsigned int var_24 = 2826695558U;
unsigned long long int var_25 = 15223362430315384036ULL;
unsigned int var_26 = 3059933950U;
unsigned char var_27 = (unsigned char)77;
unsigned char arr_1 [15] [15] ;
short arr_2 [15] ;
unsigned short arr_4 [15] ;
long long int arr_5 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)11135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)40080;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -789493491269705278LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
