#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1331297089U;
unsigned char var_4 = (unsigned char)239;
short var_8 = (short)3363;
long long int var_9 = -4495378789396606154LL;
int zero = 0;
signed char var_13 = (signed char)-57;
unsigned long long int var_14 = 11102852579841658579ULL;
signed char var_15 = (signed char)41;
int var_16 = 2085555720;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
