#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned int var_6 = 2163968498U;
short var_7 = (short)-28630;
unsigned char var_8 = (unsigned char)139;
int zero = 0;
unsigned long long int var_10 = 15124556511784348451ULL;
unsigned int var_11 = 1430466491U;
unsigned char var_12 = (unsigned char)231;
int var_13 = 63694873;
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
