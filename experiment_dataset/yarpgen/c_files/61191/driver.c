#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)14;
short var_5 = (short)31811;
unsigned char var_9 = (unsigned char)211;
unsigned long long int var_11 = 11466276840410989589ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 2881552965908486215ULL;
unsigned short var_14 = (unsigned short)36706;
short var_15 = (short)20954;
unsigned long long int var_16 = 15704386617628577534ULL;
_Bool var_17 = (_Bool)1;
short var_18 = (short)30836;
unsigned short var_19 = (unsigned short)9060;
signed char var_20 = (signed char)-36;
int var_21 = 56778510;
short arr_6 [11] ;
_Bool arr_11 [22] ;
unsigned short arr_12 [22] ;
signed char arr_13 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (short)21821;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned short)35867;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (signed char)19;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
