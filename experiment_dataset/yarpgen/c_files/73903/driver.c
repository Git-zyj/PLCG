#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)65301;
unsigned long long int var_2 = 12430017571664563037ULL;
unsigned int var_10 = 2409247963U;
int zero = 0;
long long int var_13 = -8427964807236547807LL;
unsigned short var_14 = (unsigned short)6458;
int var_15 = 929595963;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
