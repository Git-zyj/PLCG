#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)119;
int var_3 = 1476434519;
int var_4 = -1984807986;
short var_7 = (short)26960;
unsigned short var_12 = (unsigned short)22838;
unsigned char var_13 = (unsigned char)144;
int zero = 0;
int var_14 = -1932958370;
unsigned long long int var_15 = 1675007840089962355ULL;
unsigned long long int var_16 = 10835317065896577997ULL;
short var_17 = (short)14099;
unsigned long long int arr_4 [16] ;
long long int arr_8 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 14096888094072982953ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = 7055740051910551826LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
