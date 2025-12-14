#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)131;
signed char var_4 = (signed char)63;
unsigned char var_6 = (unsigned char)149;
unsigned int var_13 = 25275158U;
unsigned int var_18 = 1973425931U;
signed char var_19 = (signed char)67;
int zero = 0;
unsigned short var_20 = (unsigned short)39552;
unsigned long long int var_21 = 3767766076515175356ULL;
unsigned long long int var_22 = 6158742295482931365ULL;
unsigned long long int var_23 = 10343975031114941773ULL;
unsigned short var_24 = (unsigned short)30169;
unsigned char arr_3 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)196;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
