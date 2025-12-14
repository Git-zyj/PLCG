#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_5 = 960100561U;
short var_9 = (short)-32435;
long long int var_12 = -7720819087256584694LL;
int zero = 0;
signed char var_16 = (signed char)64;
unsigned long long int var_17 = 14355756377024103024ULL;
unsigned char var_18 = (unsigned char)211;
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
