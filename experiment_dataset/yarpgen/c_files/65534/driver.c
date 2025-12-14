#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3821628990U;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)45050;
signed char var_12 = (signed char)-125;
int var_13 = -1290903780;
int zero = 0;
unsigned long long int var_15 = 8663917857318526956ULL;
signed char var_16 = (signed char)94;
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
