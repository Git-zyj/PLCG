#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15574634612029575123ULL;
unsigned int var_2 = 2850926803U;
unsigned int var_4 = 2133241752U;
unsigned char var_5 = (unsigned char)219;
unsigned char var_6 = (unsigned char)31;
long long int var_9 = -2772284737189074226LL;
long long int var_11 = -2490804873585845884LL;
unsigned int var_12 = 498439622U;
short var_13 = (short)-2646;
long long int var_15 = -6943135263556557472LL;
int zero = 0;
unsigned long long int var_17 = 11759664704402820972ULL;
signed char var_18 = (signed char)-24;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8387986374343206242ULL;
short var_21 = (short)24638;
short var_22 = (short)-19478;
long long int var_23 = -6477932018751229321LL;
long long int var_24 = 6786854255626839076LL;
short arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned char arr_2 [18] ;
unsigned int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-1932;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 3984434998U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
