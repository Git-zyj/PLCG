#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2762115922U;
long long int var_4 = -6607599645330531020LL;
unsigned int var_8 = 610687152U;
int zero = 0;
unsigned int var_15 = 1557007904U;
long long int var_16 = 7318954967536096622LL;
long long int var_17 = -7661659487725343469LL;
long long int var_18 = 7913745933775938490LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
