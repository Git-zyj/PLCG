#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)40407;
int var_3 = 710380167;
signed char var_4 = (signed char)93;
unsigned char var_6 = (unsigned char)62;
short var_10 = (short)-25664;
unsigned int var_11 = 239959395U;
signed char var_12 = (signed char)43;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_15 = (signed char)-75;
unsigned char var_16 = (unsigned char)40;
unsigned int var_17 = 4145344210U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
