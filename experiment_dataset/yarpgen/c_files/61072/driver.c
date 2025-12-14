#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)15;
int var_5 = 242248772;
unsigned long long int var_7 = 11025361439513078975ULL;
signed char var_10 = (signed char)16;
int zero = 0;
unsigned long long int var_12 = 14903973225291253922ULL;
signed char var_13 = (signed char)-12;
int var_14 = 1748357654;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
