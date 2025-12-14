#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7517650165675971801LL;
unsigned long long int var_5 = 8909067873650452128ULL;
short var_8 = (short)12802;
unsigned short var_10 = (unsigned short)45323;
long long int var_11 = -2371781480517866632LL;
int var_12 = -1094182645;
int zero = 0;
unsigned long long int var_17 = 1069434201611210658ULL;
long long int var_18 = 1062273234492200011LL;
unsigned long long int var_19 = 10925834843234848878ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
