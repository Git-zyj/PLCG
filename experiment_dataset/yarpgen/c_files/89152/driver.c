#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 16716318808584233716ULL;
unsigned short var_9 = (unsigned short)17090;
int zero = 0;
long long int var_10 = 4244856628003744868LL;
unsigned short var_11 = (unsigned short)55623;
unsigned char var_12 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
