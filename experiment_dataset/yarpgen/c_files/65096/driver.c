#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 947125894;
long long int var_4 = -4980270952331958965LL;
unsigned short var_6 = (unsigned short)40306;
int var_8 = 1811875348;
int var_9 = 846075532;
unsigned long long int var_12 = 535455217307765125ULL;
int zero = 0;
int var_13 = 1049175353;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
