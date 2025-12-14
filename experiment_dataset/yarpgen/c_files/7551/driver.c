#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)254;
unsigned char var_2 = (unsigned char)102;
signed char var_9 = (signed char)62;
int zero = 0;
long long int var_10 = 1569800134951827633LL;
unsigned long long int var_11 = 5150321697984308211ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
