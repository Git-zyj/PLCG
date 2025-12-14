#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3423871439U;
long long int var_1 = -7411644992216268385LL;
signed char var_6 = (signed char)-107;
signed char var_8 = (signed char)-107;
int var_10 = -1820471212;
int zero = 0;
unsigned int var_11 = 1534329369U;
unsigned int var_12 = 2205602726U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
