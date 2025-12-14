#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)59438;
unsigned short var_10 = (unsigned short)47886;
long long int var_11 = -2632476687080438697LL;
int zero = 0;
long long int var_19 = -459231012524539487LL;
unsigned short var_20 = (unsigned short)4751;
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
