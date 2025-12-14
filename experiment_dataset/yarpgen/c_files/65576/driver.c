#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1321159332U;
short var_1 = (short)-21438;
signed char var_5 = (signed char)78;
unsigned int var_8 = 3017235357U;
unsigned int var_13 = 3786997721U;
int var_14 = -988155794;
unsigned long long int var_16 = 4030906318615887434ULL;
int zero = 0;
signed char var_17 = (signed char)15;
long long int var_18 = -1412653097303422712LL;
long long int var_19 = 5496955594490942424LL;
unsigned int var_20 = 3467496697U;
unsigned char arr_0 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)243;
}

void checksum() {
    hash(&seed, var_17);
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
