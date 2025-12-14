#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4832416097069536937LL;
unsigned long long int var_2 = 12979335227023904865ULL;
unsigned long long int var_5 = 621639101337083159ULL;
short var_9 = (short)25849;
int zero = 0;
unsigned short var_11 = (unsigned short)55836;
long long int var_12 = -8091790895679670260LL;
void init() {
}

void checksum() {
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
