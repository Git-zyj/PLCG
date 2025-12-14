#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-88;
signed char var_4 = (signed char)-19;
signed char var_5 = (signed char)-41;
int var_9 = -345764419;
signed char var_12 = (signed char)-38;
signed char var_13 = (signed char)-113;
int zero = 0;
signed char var_18 = (signed char)122;
int var_19 = 455769952;
int var_20 = -2094294153;
int var_21 = -1408629589;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
