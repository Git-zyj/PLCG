#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6341421630701190451LL;
_Bool var_12 = (_Bool)0;
short var_17 = (short)-25287;
int zero = 0;
long long int var_19 = -6716471421896343649LL;
unsigned short var_20 = (unsigned short)46976;
void init() {
}

void checksum() {
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
