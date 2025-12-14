#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
signed char var_1 = (signed char)37;
int var_9 = 147942831;
int var_11 = 555668131;
signed char var_12 = (signed char)-41;
int zero = 0;
unsigned long long int var_13 = 6512546606541813728ULL;
int var_14 = -782834714;
void init() {
}

void checksum() {
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
