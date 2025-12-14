#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7914654958711129155LL;
unsigned short var_5 = (unsigned short)12819;
unsigned short var_6 = (unsigned short)21224;
int zero = 0;
unsigned int var_14 = 3797823996U;
short var_15 = (short)-1181;
unsigned long long int var_16 = 13115496370990987792ULL;
unsigned int var_17 = 3000574211U;
int var_18 = 643311343;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
