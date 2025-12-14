#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 569282854U;
unsigned char var_5 = (unsigned char)142;
unsigned char var_6 = (unsigned char)246;
unsigned short var_11 = (unsigned short)64020;
int zero = 0;
int var_14 = 2029191136;
unsigned long long int var_15 = 5412801275958142266ULL;
_Bool var_16 = (_Bool)0;
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
