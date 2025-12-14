#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
unsigned char var_4 = (unsigned char)70;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)46;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)109;
void init() {
}

void checksum() {
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
