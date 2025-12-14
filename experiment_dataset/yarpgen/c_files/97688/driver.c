#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 598339214;
unsigned int var_12 = 3096535059U;
unsigned long long int var_16 = 12185022689546432846ULL;
int zero = 0;
unsigned long long int var_20 = 7359151277610186651ULL;
unsigned char var_21 = (unsigned char)26;
short var_22 = (short)27311;
unsigned int var_23 = 2935285327U;
unsigned long long int var_24 = 15396015736745153965ULL;
int arr_3 [15] ;
_Bool arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -1128858893;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
