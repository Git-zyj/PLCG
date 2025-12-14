#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 127905903;
int var_14 = -1341358424;
unsigned long long int var_15 = 9174472012012521150ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
short var_19 = (short)-15534;
int var_20 = 1742261956;
void init() {
}

void checksum() {
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
