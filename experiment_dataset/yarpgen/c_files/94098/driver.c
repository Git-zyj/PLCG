#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1024538926878479537LL;
unsigned char var_2 = (unsigned char)83;
unsigned char var_3 = (unsigned char)159;
int zero = 0;
unsigned char var_15 = (unsigned char)96;
unsigned long long int var_16 = 9039406082929663329ULL;
unsigned char var_17 = (unsigned char)11;
unsigned char var_18 = (unsigned char)1;
unsigned long long int arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 8501439991584964866ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
