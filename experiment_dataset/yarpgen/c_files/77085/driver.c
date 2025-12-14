#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)0;
int var_4 = -111338684;
int var_8 = -1762551267;
unsigned short var_11 = (unsigned short)38532;
int zero = 0;
unsigned short var_13 = (unsigned short)44779;
unsigned int var_14 = 2840995091U;
signed char var_15 = (signed char)-58;
_Bool var_16 = (_Bool)0;
void init() {
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
