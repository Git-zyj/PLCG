#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2194492107571353668LL;
unsigned long long int var_3 = 13851868898698648887ULL;
unsigned long long int var_9 = 5051566277918480236ULL;
long long int var_10 = -2883384700813467734LL;
long long int var_15 = -7345821840875434812LL;
int zero = 0;
long long int var_16 = -7104164414621251160LL;
unsigned long long int var_17 = 2605385119276514450ULL;
unsigned long long int var_18 = 6730128835077649556ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
