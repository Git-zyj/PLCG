#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9193589950671273595ULL;
signed char var_7 = (signed char)108;
unsigned long long int var_10 = 12385486036318221517ULL;
int zero = 0;
long long int var_15 = 5222976532923669199LL;
short var_16 = (short)-13566;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
