#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 420048536U;
unsigned char var_2 = (unsigned char)221;
short var_12 = (short)15888;
unsigned int var_16 = 3185704646U;
int zero = 0;
unsigned int var_19 = 2542633191U;
long long int var_20 = -4199577238686096407LL;
unsigned int var_21 = 3287426951U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
