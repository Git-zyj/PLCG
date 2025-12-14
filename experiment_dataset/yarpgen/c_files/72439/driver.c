#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 7054312605828680220ULL;
unsigned long long int var_6 = 4444799494709199613ULL;
unsigned char var_7 = (unsigned char)178;
unsigned char var_16 = (unsigned char)194;
int zero = 0;
unsigned long long int var_17 = 1163753712558391409ULL;
short var_18 = (short)-15482;
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
