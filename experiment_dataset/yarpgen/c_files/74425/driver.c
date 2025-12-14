#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6349062365045694733ULL;
long long int var_9 = -8649274298143118291LL;
long long int var_10 = -3893387497126131801LL;
int zero = 0;
long long int var_14 = -1993552674657274022LL;
unsigned long long int var_15 = 11448773534915355290ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
