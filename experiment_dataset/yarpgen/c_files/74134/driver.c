#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3603407537U;
long long int var_4 = -8783449176931185569LL;
signed char var_8 = (signed char)91;
unsigned int var_10 = 2574627344U;
int zero = 0;
signed char var_14 = (signed char)-56;
signed char var_15 = (signed char)90;
unsigned char var_16 = (unsigned char)59;
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
