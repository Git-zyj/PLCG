#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned char var_8 = (unsigned char)95;
unsigned char var_13 = (unsigned char)106;
int zero = 0;
short var_15 = (short)-27392;
int var_16 = 2020632508;
long long int var_17 = -8682521380943088076LL;
signed char var_18 = (signed char)-118;
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
