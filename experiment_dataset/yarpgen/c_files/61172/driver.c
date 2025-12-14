#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int zero = 0;
unsigned short var_13 = (unsigned short)41357;
unsigned short var_14 = (unsigned short)32544;
unsigned long long int var_15 = 5311862659478568510ULL;
unsigned short var_16 = (unsigned short)36463;
int arr_1 [19] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -1869367420;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)174;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
