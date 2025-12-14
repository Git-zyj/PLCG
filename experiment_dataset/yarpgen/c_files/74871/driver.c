#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8419583521438276145ULL;
unsigned char var_4 = (unsigned char)177;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned short var_16 = (unsigned short)27926;
unsigned char var_17 = (unsigned char)53;
int var_18 = 1604506525;
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
