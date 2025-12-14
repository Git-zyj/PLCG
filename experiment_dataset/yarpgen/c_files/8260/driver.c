#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3667590078116262187LL;
long long int var_8 = -853126718623294675LL;
unsigned short var_9 = (unsigned short)40236;
int zero = 0;
unsigned long long int var_10 = 14300461983590280343ULL;
unsigned short var_11 = (unsigned short)27186;
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
