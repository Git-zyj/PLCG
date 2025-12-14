#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28537;
unsigned short var_1 = (unsigned short)64212;
int var_3 = 504931092;
long long int var_6 = -563574532612612910LL;
unsigned char var_9 = (unsigned char)57;
unsigned char var_10 = (unsigned char)23;
unsigned short var_12 = (unsigned short)49248;
int zero = 0;
unsigned short var_13 = (unsigned short)8839;
signed char var_14 = (signed char)2;
int var_15 = 703102568;
unsigned int var_16 = 12203760U;
unsigned short arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)11835;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
