#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5792331337792945690LL;
unsigned long long int var_6 = 16650048441504776496ULL;
int zero = 0;
signed char var_11 = (signed char)29;
long long int var_12 = -7976905406228980715LL;
unsigned short var_13 = (unsigned short)49765;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
