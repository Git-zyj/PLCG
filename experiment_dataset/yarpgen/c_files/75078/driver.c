#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-41;
_Bool var_4 = (_Bool)0;
long long int var_8 = -7242201803194338609LL;
short var_9 = (short)19145;
int zero = 0;
short var_13 = (short)-4899;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-26;
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
