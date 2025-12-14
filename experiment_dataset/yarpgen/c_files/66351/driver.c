#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 929186419;
int var_2 = -1282193998;
int var_4 = 961256388;
int var_5 = 576011035;
int var_7 = -1625742503;
int var_8 = -599442930;
int zero = 0;
int var_10 = -895805396;
int var_11 = -1129164470;
int var_12 = -1836985565;
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
