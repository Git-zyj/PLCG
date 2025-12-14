#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9079176942673344705LL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 6894777099457552336ULL;
int zero = 0;
unsigned int var_15 = 2302765622U;
unsigned int var_16 = 2298966051U;
signed char var_17 = (signed char)-91;
unsigned int var_18 = 2335641293U;
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
