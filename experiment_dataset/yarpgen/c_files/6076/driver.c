#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1387255097;
unsigned char var_4 = (unsigned char)192;
unsigned long long int var_5 = 14368157323475619265ULL;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)185;
int zero = 0;
unsigned long long int var_13 = 3621645553003463452ULL;
signed char var_14 = (signed char)44;
int var_15 = -620241844;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
