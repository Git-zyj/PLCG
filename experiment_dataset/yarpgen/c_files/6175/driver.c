#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5215807016455930426LL;
short var_5 = (short)-9890;
signed char var_7 = (signed char)-75;
short var_8 = (short)17970;
unsigned int var_12 = 2399103448U;
long long int var_15 = -4226745435581590862LL;
unsigned short var_16 = (unsigned short)2514;
int zero = 0;
long long int var_17 = -2041904604289080368LL;
short var_18 = (short)-15683;
long long int var_19 = -8524075418592752394LL;
unsigned short var_20 = (unsigned short)5272;
unsigned int var_21 = 2739715098U;
unsigned long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 7593289198263972768ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
