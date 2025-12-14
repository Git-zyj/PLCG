#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1141514248;
unsigned char var_5 = (unsigned char)174;
long long int var_6 = 1134067105358620208LL;
unsigned long long int var_8 = 15428150057991607315ULL;
int zero = 0;
int var_10 = 1985211636;
unsigned char var_11 = (unsigned char)17;
long long int var_12 = -9185892088987215596LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
