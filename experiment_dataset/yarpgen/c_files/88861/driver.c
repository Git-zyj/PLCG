#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)40738;
unsigned long long int var_13 = 8766890965188691994ULL;
int zero = 0;
unsigned long long int var_15 = 18152655934660980744ULL;
unsigned int var_16 = 465191014U;
int var_17 = 1533697136;
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
