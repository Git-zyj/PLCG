#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 391027637;
unsigned char var_3 = (unsigned char)48;
short var_7 = (short)-28732;
unsigned char var_14 = (unsigned char)149;
int zero = 0;
unsigned long long int var_17 = 10591136827318732257ULL;
signed char var_18 = (signed char)-55;
signed char var_19 = (signed char)7;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
