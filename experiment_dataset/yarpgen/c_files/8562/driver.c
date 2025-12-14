#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-41;
short var_4 = (short)14731;
int var_7 = -738140689;
unsigned char var_9 = (unsigned char)192;
unsigned int var_10 = 2427294968U;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
signed char var_14 = (signed char)-119;
unsigned char var_15 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
