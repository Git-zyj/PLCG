#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12810;
unsigned char var_7 = (unsigned char)58;
unsigned short var_9 = (unsigned short)47016;
unsigned short var_10 = (unsigned short)33429;
int zero = 0;
long long int var_14 = -6211571282621952300LL;
unsigned short var_15 = (unsigned short)32062;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2327518210U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
