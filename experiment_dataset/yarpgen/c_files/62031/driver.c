#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
short var_3 = (short)21510;
unsigned int var_9 = 43662778U;
signed char var_11 = (signed char)-92;
unsigned char var_13 = (unsigned char)77;
int zero = 0;
signed char var_15 = (signed char)105;
unsigned int var_16 = 2421566732U;
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
