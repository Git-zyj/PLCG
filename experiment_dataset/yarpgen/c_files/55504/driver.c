#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1790715900;
unsigned short var_1 = (unsigned short)33383;
unsigned short var_2 = (unsigned short)43407;
signed char var_4 = (signed char)-29;
int zero = 0;
unsigned short var_16 = (unsigned short)43175;
long long int var_17 = -6572619157544091177LL;
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
