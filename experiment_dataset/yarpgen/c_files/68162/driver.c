#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -549739475;
short var_3 = (short)-20749;
unsigned long long int var_5 = 11342844117162597117ULL;
unsigned char var_10 = (unsigned char)176;
unsigned long long int var_13 = 20792861523777484ULL;
short var_15 = (short)-13510;
unsigned char var_16 = (unsigned char)26;
int zero = 0;
unsigned int var_17 = 3684238881U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2193816255U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
