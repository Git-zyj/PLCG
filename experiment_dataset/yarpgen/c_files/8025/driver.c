#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)40355;
unsigned char var_9 = (unsigned char)227;
signed char var_10 = (signed char)17;
signed char var_11 = (signed char)-47;
signed char var_14 = (signed char)-119;
int zero = 0;
unsigned short var_18 = (unsigned short)52337;
unsigned char var_19 = (unsigned char)242;
unsigned char var_20 = (unsigned char)137;
long long int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 7682125241126734749LL : 3238895495860797546LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
