#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_10 = (signed char)-21;
long long int var_11 = -1295812757893716594LL;
signed char var_12 = (signed char)-46;
int zero = 0;
signed char var_14 = (signed char)-111;
signed char var_15 = (signed char)68;
long long int var_16 = 7332959117047580012LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
