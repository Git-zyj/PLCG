#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5098309939696216518LL;
int var_2 = 1177283926;
int var_13 = -773333822;
_Bool var_18 = (_Bool)0;
int zero = 0;
int var_19 = 1865674589;
int var_20 = -1554606780;
long long int var_21 = 2605018819284596010LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
