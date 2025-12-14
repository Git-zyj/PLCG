#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30117;
unsigned short var_1 = (unsigned short)49684;
unsigned short var_9 = (unsigned short)46900;
unsigned long long int var_10 = 1275930857905546559ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)35851;
short var_12 = (short)-22420;
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
