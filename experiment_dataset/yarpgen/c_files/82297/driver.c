#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1718934234;
unsigned int var_5 = 1574420272U;
unsigned char var_7 = (unsigned char)40;
unsigned char var_10 = (unsigned char)161;
int zero = 0;
short var_18 = (short)3523;
long long int var_19 = 4953623136410982594LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
