#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned char var_1 = (unsigned char)67;
int var_3 = 825961703;
int var_7 = -1238135519;
unsigned long long int var_9 = 3505165827183191353ULL;
unsigned char var_11 = (unsigned char)193;
unsigned char var_12 = (unsigned char)83;
int zero = 0;
unsigned char var_13 = (unsigned char)126;
_Bool var_14 = (_Bool)0;
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
