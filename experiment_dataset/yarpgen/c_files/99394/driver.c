#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60509;
unsigned short var_2 = (unsigned short)29267;
unsigned short var_3 = (unsigned short)32673;
long long int var_6 = 7143528659980271203LL;
long long int var_7 = -8636667534502605502LL;
unsigned long long int var_8 = 11675243565098109018ULL;
signed char var_9 = (signed char)30;
unsigned short var_10 = (unsigned short)45302;
int zero = 0;
signed char var_13 = (signed char)-101;
long long int var_14 = 6623553395103588102LL;
unsigned int var_15 = 3411302283U;
unsigned short var_16 = (unsigned short)25678;
unsigned short var_17 = (unsigned short)29057;
long long int var_18 = 8613025884238029240LL;
unsigned short arr_0 [16] ;
short arr_3 [18] ;
_Bool arr_4 [18] ;
short arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)41248;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (short)15369;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-16725;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
