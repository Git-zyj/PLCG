#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3899382329168917280LL;
long long int var_6 = -9182192025177099700LL;
unsigned short var_9 = (unsigned short)60388;
int zero = 0;
int var_10 = -952721798;
long long int var_11 = 8390574555413245043LL;
int var_12 = -1351585570;
long long int var_13 = 2529512899663859351LL;
unsigned short arr_0 [18] ;
unsigned char arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)32192;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)126;
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
