#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)2952;
unsigned char var_4 = (unsigned char)245;
signed char var_6 = (signed char)-42;
signed char var_8 = (signed char)-75;
long long int var_10 = 2227218712199250152LL;
unsigned short var_11 = (unsigned short)38799;
signed char var_12 = (signed char)121;
long long int var_14 = -5984263814974772139LL;
int zero = 0;
unsigned int var_15 = 2215536841U;
unsigned int var_16 = 1904314034U;
int var_17 = 1158326791;
unsigned short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)7164;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
