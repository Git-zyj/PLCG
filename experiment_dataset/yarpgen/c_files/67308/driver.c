#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)222;
unsigned char var_6 = (unsigned char)249;
unsigned char var_14 = (unsigned char)141;
unsigned short var_17 = (unsigned short)47343;
int zero = 0;
int var_19 = -1851430790;
signed char var_20 = (signed char)-125;
signed char var_21 = (signed char)-21;
unsigned short var_22 = (unsigned short)24809;
signed char var_23 = (signed char)-109;
unsigned long long int var_24 = 8360817824014693476ULL;
signed char arr_0 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-107;
}

void checksum() {
    hash(&seed, var_19);
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
