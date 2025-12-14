#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13020775280072437864ULL;
unsigned long long int var_8 = 15016588290752359601ULL;
int var_15 = 767456101;
int zero = 0;
unsigned int var_20 = 2478814531U;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 961901621449358762ULL;
short var_23 = (short)-23725;
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
