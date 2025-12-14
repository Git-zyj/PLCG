#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29093;
unsigned long long int var_3 = 17870154285636233412ULL;
signed char var_4 = (signed char)3;
long long int var_6 = -472283264001819068LL;
int var_8 = 62765718;
int zero = 0;
unsigned char var_12 = (unsigned char)164;
long long int var_13 = 2144920402090166243LL;
void init() {
}

void checksum() {
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
