#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16753741326101437508ULL;
unsigned short var_1 = (unsigned short)49393;
long long int var_3 = 6519406272779127569LL;
unsigned char var_4 = (unsigned char)194;
unsigned char var_6 = (unsigned char)59;
unsigned long long int var_7 = 16951478841075822900ULL;
short var_8 = (short)6082;
int zero = 0;
long long int var_11 = 8532404606747559678LL;
unsigned short var_12 = (unsigned short)42997;
unsigned long long int var_13 = 6988300948985704499ULL;
short var_14 = (short)-9704;
long long int var_15 = -3032839865738616679LL;
unsigned long long int var_16 = 612111270678311821ULL;
short var_17 = (short)-25341;
int var_18 = 1806262885;
long long int var_19 = -6973466217702092406LL;
unsigned int var_20 = 2838769632U;
signed char var_21 = (signed char)-20;
unsigned char var_22 = (unsigned char)57;
unsigned int var_23 = 3588388978U;
signed char var_24 = (signed char)6;
int var_25 = 280676268;
short var_26 = (short)8838;
int var_27 = 1010619347;
signed char arr_3 [11] ;
signed char arr_16 [11] [11] [11] ;
unsigned int arr_20 [11] [11] [11] ;
short arr_23 [11] ;
short arr_24 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)16 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3768544904U : 3233303483U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_23 [i_0] = (short)-32482;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (short)16723;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
