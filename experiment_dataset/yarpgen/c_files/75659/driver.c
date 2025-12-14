#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)55;
signed char var_3 = (signed char)-112;
int var_4 = 260676940;
signed char var_7 = (signed char)55;
int var_11 = -248956739;
int zero = 0;
int var_16 = 772204449;
signed char var_17 = (signed char)-89;
int var_18 = 990188882;
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
