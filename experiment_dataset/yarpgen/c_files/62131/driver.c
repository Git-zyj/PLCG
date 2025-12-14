#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9931831544452224851ULL;
unsigned int var_6 = 271878353U;
int var_14 = 1079967628;
int zero = 0;
long long int var_17 = -6067243041923899164LL;
short var_18 = (short)31711;
unsigned long long int var_19 = 4509965629016399ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
