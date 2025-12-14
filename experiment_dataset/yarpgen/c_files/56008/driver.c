#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 2127497863U;
signed char var_3 = (signed char)-94;
short var_6 = (short)9257;
unsigned int var_8 = 2021886904U;
unsigned short var_9 = (unsigned short)46546;
int zero = 0;
signed char var_15 = (signed char)-82;
unsigned long long int var_16 = 8153356448922103772ULL;
unsigned char var_17 = (unsigned char)63;
unsigned int var_18 = 3557615347U;
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
