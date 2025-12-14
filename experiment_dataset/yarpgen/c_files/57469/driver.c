#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 4257538054905786280ULL;
unsigned int var_4 = 1442895284U;
unsigned short var_5 = (unsigned short)10285;
_Bool var_6 = (_Bool)1;
int var_7 = 891360197;
unsigned short var_8 = (unsigned short)46674;
int zero = 0;
signed char var_10 = (signed char)21;
int var_11 = 460275737;
unsigned short var_12 = (unsigned short)299;
long long int var_13 = -2073205431401508602LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
