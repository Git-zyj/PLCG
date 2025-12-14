#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)7;
signed char var_4 = (signed char)-56;
long long int var_14 = 2117537406667295014LL;
long long int var_16 = 5057287626772949621LL;
int zero = 0;
short var_19 = (short)-28049;
unsigned char var_20 = (unsigned char)210;
unsigned long long int var_21 = 2303717500982832856ULL;
unsigned int var_22 = 2188524707U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
