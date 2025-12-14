#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5657115300056444679LL;
_Bool var_1 = (_Bool)0;
unsigned char var_3 = (unsigned char)41;
short var_5 = (short)-15545;
unsigned int var_7 = 2303896136U;
short var_9 = (short)32728;
int zero = 0;
int var_10 = -1756818416;
long long int var_11 = -5313823290499317781LL;
unsigned char var_12 = (unsigned char)179;
short var_13 = (short)1232;
int var_14 = 1668225578;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
