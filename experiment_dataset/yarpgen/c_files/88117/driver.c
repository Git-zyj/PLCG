#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7299368663714794900LL;
long long int var_2 = 2721629228385198141LL;
long long int var_4 = 5585456962034120841LL;
long long int var_5 = -8031332624909868674LL;
int zero = 0;
long long int var_11 = -3024271150205776475LL;
long long int var_12 = 7381864881197457788LL;
long long int var_13 = -6928687179739028906LL;
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
