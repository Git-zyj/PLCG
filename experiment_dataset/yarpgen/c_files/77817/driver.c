#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)184;
int var_1 = 496655003;
int var_5 = -242910326;
int var_6 = 1588107907;
unsigned long long int var_7 = 15876520425293546833ULL;
unsigned short var_8 = (unsigned short)55695;
int zero = 0;
int var_11 = 1375164065;
unsigned char var_12 = (unsigned char)239;
short var_13 = (short)-15326;
void init() {
}

void checksum() {
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
