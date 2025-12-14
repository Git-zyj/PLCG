#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8059011033487238285ULL;
unsigned long long int var_2 = 1126403745836045346ULL;
signed char var_3 = (signed char)-75;
long long int var_4 = 6268845796173509150LL;
int var_6 = -787076478;
unsigned int var_7 = 1365417594U;
short var_11 = (short)-4609;
int zero = 0;
unsigned char var_12 = (unsigned char)112;
long long int var_13 = -98406293260289426LL;
short var_14 = (short)-7064;
short arr_3 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (short)23056;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
