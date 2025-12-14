#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 448489523U;
short var_1 = (short)-28530;
signed char var_4 = (signed char)-110;
unsigned int var_8 = 109333762U;
long long int var_10 = -2585549827977503633LL;
int zero = 0;
unsigned short var_14 = (unsigned short)44679;
short var_15 = (short)-3904;
unsigned long long int var_16 = 6371438597729348794ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
