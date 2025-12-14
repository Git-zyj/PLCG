#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)29;
signed char var_3 = (signed char)73;
_Bool var_6 = (_Bool)0;
unsigned char var_9 = (unsigned char)18;
int zero = 0;
short var_10 = (short)9149;
long long int var_11 = -6636969239233937240LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
