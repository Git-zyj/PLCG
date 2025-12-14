#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9140842537007580503ULL;
unsigned long long int var_2 = 1318051411860379955ULL;
unsigned short var_5 = (unsigned short)13291;
int var_6 = -658594497;
int zero = 0;
signed char var_10 = (signed char)85;
unsigned long long int var_11 = 3433073602526561916ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
