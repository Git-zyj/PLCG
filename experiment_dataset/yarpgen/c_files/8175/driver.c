#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -618924193978870629LL;
unsigned int var_9 = 3849697429U;
unsigned int var_12 = 1263197085U;
int zero = 0;
unsigned long long int var_20 = 4353788185509893370ULL;
unsigned short var_21 = (unsigned short)16072;
void init() {
}

void checksum() {
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
