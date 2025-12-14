#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14717;
long long int var_6 = 486674237601062709LL;
long long int var_7 = -886244041093926785LL;
signed char var_8 = (signed char)-18;
int zero = 0;
long long int var_14 = -865562401427361604LL;
signed char var_15 = (signed char)71;
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
