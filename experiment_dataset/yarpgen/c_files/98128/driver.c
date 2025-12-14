#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)15713;
unsigned char var_9 = (unsigned char)167;
int zero = 0;
signed char var_10 = (signed char)119;
signed char var_11 = (signed char)-13;
long long int var_12 = -6548642777758030764LL;
unsigned int var_13 = 2638368232U;
unsigned long long int var_14 = 7300704401587717740ULL;
unsigned int var_15 = 1483595139U;
long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -3767740385505780468LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
