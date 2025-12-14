#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1370961387532850116LL;
short var_1 = (short)-15583;
unsigned short var_2 = (unsigned short)31182;
int var_10 = -2125899805;
short var_13 = (short)973;
long long int var_15 = -5057393532722223167LL;
int zero = 0;
short var_18 = (short)-26936;
unsigned int var_19 = 2455085467U;
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
