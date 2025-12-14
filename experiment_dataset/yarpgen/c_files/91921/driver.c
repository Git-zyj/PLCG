#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1299508950;
unsigned char var_3 = (unsigned char)119;
short var_11 = (short)30200;
unsigned char var_14 = (unsigned char)222;
signed char var_19 = (signed char)5;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3622178785U;
signed char var_22 = (signed char)45;
_Bool var_23 = (_Bool)0;
int var_24 = 671342789;
unsigned short var_25 = (unsigned short)42692;
short var_26 = (short)1460;
unsigned short arr_0 [21] ;
unsigned char arr_3 [21] [21] [21] ;
unsigned char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)41328;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)81;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)90 : (unsigned char)208;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
