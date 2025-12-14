#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1999198382U;
long long int var_7 = -4385643684219268924LL;
short var_8 = (short)-29836;
int zero = 0;
long long int var_11 = 4667340592199928291LL;
unsigned char var_12 = (unsigned char)248;
unsigned long long int var_13 = 12801030309076402002ULL;
long long int var_14 = 3176653149837430355LL;
long long int var_15 = 4018478825853602459LL;
long long int arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7597802301940727209LL;
}

void checksum() {
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
