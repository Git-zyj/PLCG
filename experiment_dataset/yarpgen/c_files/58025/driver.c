#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6925430627270452020ULL;
unsigned int var_5 = 1663256372U;
unsigned int var_6 = 3747375077U;
unsigned long long int var_7 = 2352916427932620573ULL;
unsigned long long int var_8 = 9184020473504533287ULL;
short var_9 = (short)4257;
unsigned short var_11 = (unsigned short)59619;
unsigned char var_12 = (unsigned char)133;
short var_13 = (short)-379;
short var_14 = (short)21480;
unsigned char var_18 = (unsigned char)147;
int zero = 0;
long long int var_19 = 4142931623053977257LL;
unsigned short var_20 = (unsigned short)439;
short var_21 = (short)-4335;
unsigned char var_22 = (unsigned char)191;
unsigned char var_23 = (unsigned char)98;
unsigned int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 505432399U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
