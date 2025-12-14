#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-23433;
int var_15 = -545129794;
unsigned long long int var_19 = 17298276009278299241ULL;
int zero = 0;
int var_20 = -1020388003;
int var_21 = 1338491586;
unsigned char var_22 = (unsigned char)231;
unsigned short var_23 = (unsigned short)5048;
signed char var_24 = (signed char)-36;
unsigned int var_25 = 3838228602U;
unsigned short arr_0 [13] ;
long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)42467;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 941592046775109784LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
