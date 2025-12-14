#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)104;
unsigned char var_5 = (unsigned char)53;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)79;
long long int var_14 = 7267864744569270338LL;
unsigned long long int var_15 = 11719300910560107524ULL;
int zero = 0;
unsigned int var_16 = 1555071487U;
unsigned char var_17 = (unsigned char)212;
signed char var_18 = (signed char)124;
void init() {
}

void checksum() {
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
