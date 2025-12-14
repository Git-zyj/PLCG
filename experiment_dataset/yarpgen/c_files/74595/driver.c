#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3376033080673475394LL;
signed char var_5 = (signed char)7;
unsigned char var_6 = (unsigned char)241;
unsigned short var_9 = (unsigned short)33141;
int zero = 0;
short var_10 = (short)19289;
unsigned char var_11 = (unsigned char)100;
long long int var_12 = -7193383627081047066LL;
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
