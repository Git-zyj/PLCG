#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1349364510U;
unsigned char var_2 = (unsigned char)147;
int var_5 = -141224131;
long long int var_8 = -6069346881086155523LL;
short var_10 = (short)3376;
unsigned int var_11 = 3453574742U;
int zero = 0;
short var_15 = (short)19643;
unsigned char var_16 = (unsigned char)186;
unsigned short var_17 = (unsigned short)52369;
unsigned int var_18 = 1053322763U;
unsigned short arr_5 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)19293;
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
