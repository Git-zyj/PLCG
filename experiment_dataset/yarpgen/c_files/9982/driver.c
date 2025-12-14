#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 14730298054059455027ULL;
short var_10 = (short)29079;
int zero = 0;
long long int var_15 = 6393893624072569521LL;
int var_16 = 822829074;
unsigned short var_17 = (unsigned short)4949;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
