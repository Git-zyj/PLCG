#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_4 = (unsigned short)7868;
unsigned char var_11 = (unsigned char)163;
int zero = 0;
unsigned long long int var_13 = 2281753424233637784ULL;
unsigned short var_14 = (unsigned short)56524;
unsigned int var_15 = 2620910307U;
unsigned char var_16 = (unsigned char)38;
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
