#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)34;
signed char var_4 = (signed char)-126;
signed char var_5 = (signed char)-60;
unsigned char var_6 = (unsigned char)128;
unsigned int var_7 = 1761515269U;
signed char var_9 = (signed char)-45;
int var_13 = -792030854;
unsigned long long int var_14 = 2579962178937720937ULL;
unsigned int var_15 = 1788883880U;
int zero = 0;
signed char var_16 = (signed char)-56;
unsigned int var_17 = 1417801161U;
signed char var_18 = (signed char)16;
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
