#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13594;
int var_2 = -575205097;
short var_3 = (short)2977;
unsigned short var_4 = (unsigned short)38567;
unsigned char var_6 = (unsigned char)14;
short var_7 = (short)-32245;
unsigned short var_10 = (unsigned short)58977;
unsigned long long int var_13 = 3761513470143509059ULL;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)3220;
unsigned int var_17 = 673759528U;
signed char var_18 = (signed char)-97;
void init() {
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
