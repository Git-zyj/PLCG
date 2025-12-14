#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24355;
unsigned short var_4 = (unsigned short)8961;
int zero = 0;
unsigned int var_15 = 4161431698U;
unsigned long long int var_16 = 1183414199394876709ULL;
unsigned int var_17 = 3154686916U;
unsigned long long int var_18 = 13326346501609517298ULL;
unsigned short arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)57759;
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
