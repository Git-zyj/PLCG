#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)204;
long long int var_7 = -2776905197289358604LL;
int var_10 = -767607684;
short var_11 = (short)4130;
int var_12 = 1011292464;
int zero = 0;
short var_13 = (short)-3224;
short var_14 = (short)-32536;
long long int var_15 = -6020090542817016570LL;
short var_16 = (short)-25821;
long long int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -7155914338832185254LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
