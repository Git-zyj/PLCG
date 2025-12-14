#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23343;
signed char var_2 = (signed char)47;
unsigned char var_3 = (unsigned char)118;
unsigned int var_6 = 3843487312U;
unsigned int var_10 = 3938227376U;
int zero = 0;
long long int var_14 = 3252447013168543557LL;
unsigned char var_15 = (unsigned char)112;
unsigned long long int var_16 = 3241046989874886719ULL;
unsigned char arr_8 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = (unsigned char)88;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
