#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7831525187666289030LL;
unsigned char var_5 = (unsigned char)158;
unsigned short var_10 = (unsigned short)51050;
unsigned long long int var_12 = 3169309761977130296ULL;
int zero = 0;
long long int var_14 = 2149008694532237714LL;
unsigned char var_15 = (unsigned char)10;
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
