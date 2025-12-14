#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)34461;
unsigned long long int var_7 = 12530218858209547275ULL;
unsigned short var_8 = (unsigned short)39210;
unsigned long long int var_11 = 16284079356822491847ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)42546;
unsigned short var_14 = (unsigned short)29518;
unsigned long long int var_15 = 13515099324443413186ULL;
unsigned short arr_0 [17] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)39532;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2496867399380235258ULL;
}

void checksum() {
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
