#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32572;
unsigned int var_2 = 2113427827U;
signed char var_4 = (signed char)85;
long long int var_9 = -2744347137059016426LL;
unsigned int var_11 = 2836812679U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 8646250354036188240ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
