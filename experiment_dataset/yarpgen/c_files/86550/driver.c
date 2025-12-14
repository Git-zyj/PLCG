#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21875;
signed char var_4 = (signed char)51;
unsigned char var_9 = (unsigned char)206;
short var_13 = (short)9464;
int zero = 0;
unsigned long long int var_14 = 1315947096140446014ULL;
long long int var_15 = -5155388098031743610LL;
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
