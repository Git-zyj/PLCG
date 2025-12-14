#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1601357171;
long long int var_3 = 7261049203850347596LL;
unsigned short var_6 = (unsigned short)43223;
int var_9 = -1123121431;
int zero = 0;
unsigned short var_11 = (unsigned short)59101;
short var_12 = (short)-15118;
void init() {
}

void checksum() {
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
