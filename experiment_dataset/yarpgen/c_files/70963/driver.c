#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_6 = 2802048798U;
int var_7 = 175601557;
unsigned char var_11 = (unsigned char)140;
unsigned long long int var_12 = 111474610693619409ULL;
int zero = 0;
short var_16 = (short)-32184;
unsigned long long int var_17 = 5808699919636050954ULL;
void init() {
}

void checksum() {
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
