#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6979019407490143594LL;
unsigned int var_6 = 4254710691U;
unsigned short var_8 = (unsigned short)483;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_18 = 11939776003739623952ULL;
unsigned short var_19 = (unsigned short)26519;
unsigned short var_20 = (unsigned short)5729;
_Bool var_21 = (_Bool)0;
long long int var_22 = -1673396159716750692LL;
unsigned short arr_0 [25] ;
unsigned short arr_1 [25] ;
unsigned short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52784 : (unsigned short)17390;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned short)50123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned short)46163 : (unsigned short)64260;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
