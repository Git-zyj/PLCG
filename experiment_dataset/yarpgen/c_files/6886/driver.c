#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2788197558U;
long long int var_9 = 92968058918760906LL;
long long int var_11 = -1052071091972461175LL;
short var_12 = (short)8968;
unsigned short var_17 = (unsigned short)17467;
int zero = 0;
long long int var_18 = 2640870520732418802LL;
unsigned int var_19 = 2537115096U;
short var_20 = (short)26458;
short var_21 = (short)28376;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
