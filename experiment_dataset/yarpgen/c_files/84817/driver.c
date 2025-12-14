#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 425929297;
short var_5 = (short)-3937;
short var_6 = (short)-21943;
unsigned char var_7 = (unsigned char)8;
unsigned long long int var_9 = 3916362962058839907ULL;
short var_13 = (short)10867;
int zero = 0;
unsigned int var_16 = 967264684U;
_Bool var_17 = (_Bool)1;
long long int var_18 = 5885017157417330241LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
