#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5472051308789831916LL;
unsigned int var_13 = 2756477430U;
short var_18 = (short)24784;
unsigned char var_19 = (unsigned char)246;
int zero = 0;
long long int var_20 = -6469288497981530091LL;
signed char var_21 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
