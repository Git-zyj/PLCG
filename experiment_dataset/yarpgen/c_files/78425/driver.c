#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 730271746U;
unsigned long long int var_4 = 4620457461604655573ULL;
unsigned long long int var_5 = 9391049708025120295ULL;
unsigned long long int var_6 = 15348206824751504967ULL;
int var_7 = -1000375849;
int var_9 = -252341800;
unsigned long long int var_12 = 14893236868363520267ULL;
signed char var_13 = (signed char)64;
int var_15 = 1051495733;
unsigned long long int var_16 = 10844261855895649364ULL;
unsigned char var_19 = (unsigned char)243;
int zero = 0;
unsigned short var_20 = (unsigned short)39386;
unsigned char var_21 = (unsigned char)103;
unsigned int var_22 = 2332842746U;
unsigned short var_23 = (unsigned short)51455;
unsigned short var_24 = (unsigned short)61084;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2041297717U;
unsigned char arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)133;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
