#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17325;
short var_4 = (short)-322;
unsigned int var_11 = 3992374259U;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_17 = 1351967076;
unsigned short var_18 = (unsigned short)53793;
void init() {
}

void checksum() {
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
