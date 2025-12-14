#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8544944381393645908LL;
long long int var_2 = 1480371021055603156LL;
long long int var_3 = 5585561173203580423LL;
long long int var_9 = 3432465789689267877LL;
long long int var_10 = -5084914504344570619LL;
long long int var_12 = 7377659884403338607LL;
int zero = 0;
long long int var_14 = 1628947803638143165LL;
int var_15 = -2046940038;
void init() {
}

void checksum() {
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
