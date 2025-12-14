#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)50546;
unsigned short var_2 = (unsigned short)45515;
short var_6 = (short)-2723;
unsigned long long int var_8 = 12795523794994013329ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
long long int var_11 = 8515872351812884810LL;
long long int var_12 = 5121007384007922683LL;
unsigned int var_13 = 388628671U;
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
