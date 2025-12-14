#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)55;
_Bool var_1 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int var_7 = 2041279044;
unsigned long long int var_8 = 2134686448605642977ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)250;
unsigned char var_11 = (unsigned char)22;
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
