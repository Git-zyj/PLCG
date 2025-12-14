#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2135633123;
unsigned long long int var_1 = 5069961764605134585ULL;
int var_2 = -122113080;
_Bool var_6 = (_Bool)0;
unsigned char var_8 = (unsigned char)238;
int zero = 0;
short var_10 = (short)-32684;
long long int var_11 = 269338827618122588LL;
int var_12 = 1845472445;
unsigned char var_13 = (unsigned char)88;
unsigned long long int var_14 = 7196855194289246920ULL;
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
