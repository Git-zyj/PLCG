#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-32025;
long long int var_7 = -3153707219234501410LL;
unsigned long long int var_11 = 7419498800541936072ULL;
short var_13 = (short)32328;
int var_14 = 425659232;
int var_17 = 1903472610;
short var_18 = (short)-19869;
int zero = 0;
short var_20 = (short)-15815;
unsigned int var_21 = 3599213430U;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)179 : (unsigned char)193;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
