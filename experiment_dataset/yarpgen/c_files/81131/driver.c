#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3350845618U;
short var_8 = (short)-19421;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 1421261436667035721ULL;
_Bool var_14 = (_Bool)1;
_Bool var_16 = (_Bool)0;
long long int var_19 = -8034131874102983832LL;
int zero = 0;
short var_20 = (short)22171;
signed char var_21 = (signed char)34;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-112;
unsigned char var_24 = (unsigned char)137;
signed char arr_0 [25] ;
signed char arr_2 [25] [25] ;
signed char arr_3 [25] [25] ;
long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)2;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -3448797101869771094LL : 3514534431848626992LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
