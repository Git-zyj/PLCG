#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -475366482530224163LL;
signed char var_3 = (signed char)-54;
long long int var_5 = -1887759804405596516LL;
unsigned char var_6 = (unsigned char)197;
short var_7 = (short)-10972;
short var_13 = (short)-7300;
long long int var_14 = -295541079125042125LL;
int var_17 = -2128531684;
int zero = 0;
long long int var_20 = 4466785440043117171LL;
int var_21 = -242605128;
unsigned char var_22 = (unsigned char)250;
short var_23 = (short)10529;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
