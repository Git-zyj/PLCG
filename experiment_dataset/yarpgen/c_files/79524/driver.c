#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2958743600U;
unsigned long long int var_5 = 13952995759326807072ULL;
_Bool var_7 = (_Bool)0;
short var_12 = (short)-5834;
signed char var_13 = (signed char)-9;
unsigned int var_14 = 2738152119U;
unsigned int var_15 = 497859670U;
int zero = 0;
long long int var_18 = -4015429440904933133LL;
unsigned char var_19 = (unsigned char)12;
unsigned char var_20 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
