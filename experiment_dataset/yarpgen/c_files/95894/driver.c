#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6201569363592033089ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)69;
int zero = 0;
unsigned short var_10 = (unsigned short)24267;
unsigned short var_11 = (unsigned short)40338;
unsigned char var_12 = (unsigned char)45;
unsigned char var_13 = (unsigned char)242;
long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2780182475113024768LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
