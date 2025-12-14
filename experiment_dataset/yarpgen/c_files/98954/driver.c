#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)90;
int var_9 = 1118103159;
unsigned int var_10 = 2552009168U;
int zero = 0;
unsigned char var_12 = (unsigned char)158;
unsigned int var_13 = 3912669346U;
unsigned int var_14 = 2663051018U;
int var_15 = -1834348217;
unsigned char var_16 = (unsigned char)202;
unsigned int var_17 = 2641744649U;
int var_18 = -1764067853;
int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = -7368659;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
