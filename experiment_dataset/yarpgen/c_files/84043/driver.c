#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 745610791;
unsigned char var_17 = (unsigned char)57;
int var_18 = 1326350994;
int zero = 0;
unsigned int var_20 = 371106140U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 12234855048719820534ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
