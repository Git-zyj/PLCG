#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6667838862751883017LL;
short var_3 = (short)12204;
unsigned long long int var_11 = 909158467468058ULL;
int zero = 0;
unsigned int var_13 = 872716103U;
unsigned char var_14 = (unsigned char)160;
unsigned long long int var_15 = 16505138091694650768ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
