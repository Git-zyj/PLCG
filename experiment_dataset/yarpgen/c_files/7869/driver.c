#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)54;
int var_1 = -254512914;
signed char var_2 = (signed char)84;
long long int var_3 = 7650510103250154281LL;
unsigned char var_6 = (unsigned char)112;
unsigned char var_7 = (unsigned char)83;
signed char var_8 = (signed char)33;
unsigned char var_9 = (unsigned char)225;
unsigned char var_10 = (unsigned char)53;
unsigned char var_11 = (unsigned char)204;
signed char var_12 = (signed char)-59;
long long int var_13 = 5684654267280377362LL;
unsigned char var_14 = (unsigned char)243;
int zero = 0;
unsigned char var_16 = (unsigned char)178;
unsigned char var_17 = (unsigned char)95;
int var_18 = 1528443465;
unsigned char var_19 = (unsigned char)89;
signed char arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-36 : (signed char)-107;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
