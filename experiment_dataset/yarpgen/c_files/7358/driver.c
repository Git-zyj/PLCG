#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 541822886472144494ULL;
unsigned long long int var_12 = 17584640830302271345ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)58961;
long long int var_16 = 4154227422913392240LL;
short var_17 = (short)-1087;
void init() {
}

void checksum() {
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
