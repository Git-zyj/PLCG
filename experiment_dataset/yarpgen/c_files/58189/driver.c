#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 4901332054509415874LL;
unsigned short var_10 = (unsigned short)29359;
int var_12 = -235014765;
int zero = 0;
long long int var_13 = -4390103508901985871LL;
long long int var_14 = 4045261086589757702LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
