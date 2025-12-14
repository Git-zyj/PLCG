#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
long long int var_4 = -5560378392652297256LL;
unsigned char var_5 = (unsigned char)172;
unsigned long long int var_17 = 14722310698992844441ULL;
int zero = 0;
unsigned int var_18 = 3995357384U;
long long int var_19 = -5218369709164470314LL;
unsigned int var_20 = 649490817U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
