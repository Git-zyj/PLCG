#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13486504735032805499ULL;
signed char var_1 = (signed char)45;
unsigned long long int var_3 = 8660994297691115347ULL;
unsigned long long int var_14 = 8596998831151023517ULL;
int zero = 0;
long long int var_19 = 4752594815435984517LL;
unsigned long long int var_20 = 7488236221628657205ULL;
signed char var_21 = (signed char)-62;
void init() {
}

void checksum() {
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
