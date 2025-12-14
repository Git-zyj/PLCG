#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1133;
unsigned long long int var_2 = 204968163031298067ULL;
int var_5 = 555560741;
unsigned long long int var_8 = 16191464580284587015ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)58067;
unsigned short var_14 = (unsigned short)21968;
unsigned short var_15 = (unsigned short)56101;
int var_16 = 335349566;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
