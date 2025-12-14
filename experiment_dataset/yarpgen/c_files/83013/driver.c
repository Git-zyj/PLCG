#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1809974916;
_Bool var_11 = (_Bool)1;
signed char var_14 = (signed char)43;
int zero = 0;
unsigned long long int var_15 = 2471372685815212349ULL;
unsigned short var_16 = (unsigned short)49495;
void init() {
}

void checksum() {
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
