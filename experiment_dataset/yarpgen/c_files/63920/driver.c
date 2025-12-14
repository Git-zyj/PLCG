#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-114;
_Bool var_6 = (_Bool)1;
long long int var_14 = 2575334614318327804LL;
int zero = 0;
unsigned int var_17 = 1107480837U;
unsigned long long int var_18 = 9824963359940397028ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
