#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13826;
unsigned char var_2 = (unsigned char)77;
short var_4 = (short)-14666;
int var_8 = 386075776;
int var_9 = -826825428;
short var_10 = (short)-5263;
int zero = 0;
int var_16 = 635337404;
unsigned short var_17 = (unsigned short)60860;
unsigned long long int var_18 = 5067752516419981597ULL;
signed char var_19 = (signed char)-94;
unsigned char var_20 = (unsigned char)45;
long long int var_21 = -8795518902793741430LL;
signed char arr_0 [17] [17] ;
unsigned int arr_1 [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 3680331570U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4999717436542248475LL : 900267829969178234LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
