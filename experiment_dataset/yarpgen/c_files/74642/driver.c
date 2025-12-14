#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 770119562U;
int var_6 = -1869212306;
unsigned char var_7 = (unsigned char)183;
unsigned int var_8 = 1242544500U;
unsigned short var_9 = (unsigned short)46783;
int zero = 0;
unsigned char var_11 = (unsigned char)93;
short var_12 = (short)-32298;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2428556869U;
int var_15 = -17812043;
unsigned long long int var_16 = 283558136191743020ULL;
long long int arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2425689963380768252LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
