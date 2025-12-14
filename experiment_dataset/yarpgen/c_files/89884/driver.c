#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)58201;
unsigned int var_4 = 1532061199U;
short var_6 = (short)-23496;
long long int var_9 = -8763233733706261591LL;
unsigned int var_12 = 1942038280U;
int var_17 = 1005981254;
int zero = 0;
long long int var_20 = 5055279288136293480LL;
int var_21 = 1558001649;
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
