#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)249;
unsigned short var_8 = (unsigned short)28296;
unsigned char var_9 = (unsigned char)17;
int zero = 0;
long long int var_10 = 7270515938643951165LL;
unsigned long long int var_11 = 8945902886277387512ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
