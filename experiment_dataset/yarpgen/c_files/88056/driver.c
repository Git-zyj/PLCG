#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9510493244157876358ULL;
unsigned long long int var_2 = 5868741318409157354ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)225;
unsigned char var_5 = (unsigned char)100;
unsigned long long int var_6 = 13951495832304543013ULL;
short var_8 = (short)13683;
unsigned int var_11 = 3757857106U;
unsigned int var_13 = 3975466124U;
int zero = 0;
unsigned char var_16 = (unsigned char)78;
unsigned long long int var_17 = 18224508209751935900ULL;
int var_18 = -1212467324;
unsigned char var_19 = (unsigned char)250;
unsigned int var_20 = 1609771664U;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-10186;
unsigned int arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
unsigned char arr_6 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 3380627502U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 4734352759724342295ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)132 : (unsigned char)126;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
