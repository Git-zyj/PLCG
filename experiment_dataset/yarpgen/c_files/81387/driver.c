#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14737158978491616680ULL;
unsigned int var_1 = 3485557381U;
unsigned int var_2 = 1290022375U;
unsigned int var_3 = 2823930939U;
signed char var_4 = (signed char)-91;
signed char var_6 = (signed char)-72;
unsigned char var_8 = (unsigned char)104;
unsigned char var_9 = (unsigned char)198;
int zero = 0;
long long int var_10 = -4820120364550239805LL;
unsigned char var_11 = (unsigned char)68;
unsigned int var_12 = 2154027406U;
unsigned char var_13 = (unsigned char)255;
unsigned char var_14 = (unsigned char)216;
unsigned long long int arr_6 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 16501062117423998337ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
