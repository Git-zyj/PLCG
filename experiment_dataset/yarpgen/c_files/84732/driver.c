#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 923244961U;
long long int var_3 = -2817251143701404045LL;
long long int var_11 = 933940101217006681LL;
unsigned long long int var_16 = 12867824996343894258ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)41669;
short var_19 = (short)-21045;
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
