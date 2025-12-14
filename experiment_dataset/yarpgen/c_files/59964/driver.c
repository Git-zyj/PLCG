#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5003659501352150982LL;
short var_1 = (short)12896;
unsigned long long int var_2 = 4210895618402468241ULL;
signed char var_4 = (signed char)-62;
unsigned char var_5 = (unsigned char)5;
unsigned char var_9 = (unsigned char)100;
int var_10 = 2025545999;
unsigned int var_11 = 613643064U;
int zero = 0;
long long int var_16 = -103781337057314081LL;
long long int var_17 = 4353322830117802388LL;
unsigned char var_18 = (unsigned char)104;
long long int var_19 = -838072520326771251LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
