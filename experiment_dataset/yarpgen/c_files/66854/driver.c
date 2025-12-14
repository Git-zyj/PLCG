#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2510594054078420685ULL;
signed char var_3 = (signed char)-18;
unsigned short var_5 = (unsigned short)60241;
short var_9 = (short)-32370;
unsigned long long int var_15 = 8547674760848043555ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)190;
short var_17 = (short)40;
unsigned char var_18 = (unsigned char)160;
unsigned long long int arr_0 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 17674769186589519414ULL;
}

void checksum() {
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
