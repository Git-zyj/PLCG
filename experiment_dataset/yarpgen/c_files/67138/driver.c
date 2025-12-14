#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 3443655996593989398LL;
signed char var_9 = (signed char)21;
unsigned int var_12 = 3262261899U;
int zero = 0;
long long int var_20 = -2543959512660297422LL;
long long int var_21 = 7959546813443776496LL;
signed char var_22 = (signed char)67;
unsigned int var_23 = 765674991U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
