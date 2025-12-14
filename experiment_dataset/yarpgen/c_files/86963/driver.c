#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9751;
long long int var_1 = 1928411221707071199LL;
long long int var_2 = 666004094234261543LL;
unsigned char var_7 = (unsigned char)76;
unsigned long long int var_8 = 5623345554350860244ULL;
unsigned char var_9 = (unsigned char)72;
int zero = 0;
unsigned long long int var_11 = 11266690063256089657ULL;
unsigned long long int var_12 = 138728316834661173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
