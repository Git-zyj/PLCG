#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4201638134U;
unsigned int var_6 = 2315776896U;
long long int var_8 = 1826657351643537397LL;
int zero = 0;
short var_16 = (short)-9429;
unsigned char var_17 = (unsigned char)216;
void init() {
}

void checksum() {
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
