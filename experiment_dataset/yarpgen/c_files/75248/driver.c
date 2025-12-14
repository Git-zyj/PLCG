#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-9;
unsigned short var_7 = (unsigned short)39142;
short var_8 = (short)31932;
long long int var_11 = 3851842931195129503LL;
int zero = 0;
unsigned int var_13 = 1533406896U;
signed char var_14 = (signed char)-1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
