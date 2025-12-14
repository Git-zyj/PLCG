#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31279;
long long int var_9 = 7371925241602612354LL;
unsigned long long int var_12 = 13197284027018323016ULL;
int var_16 = -212625473;
int zero = 0;
unsigned char var_19 = (unsigned char)203;
long long int var_20 = 6345975287185562033LL;
int var_21 = -1760321062;
long long int var_22 = -8601348525536304674LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
