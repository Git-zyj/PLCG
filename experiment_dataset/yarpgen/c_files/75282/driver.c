#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2384431771671371413LL;
long long int var_3 = -3906752081776536317LL;
short var_5 = (short)32019;
long long int var_9 = 36977799648389477LL;
int zero = 0;
short var_10 = (short)6900;
short var_11 = (short)28537;
unsigned long long int var_12 = 4072332562173540574ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
