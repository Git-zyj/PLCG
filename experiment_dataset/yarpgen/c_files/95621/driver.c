#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)244;
unsigned long long int var_6 = 1210560808194600650ULL;
signed char var_8 = (signed char)76;
unsigned long long int var_12 = 17294066640764259856ULL;
signed char var_14 = (signed char)107;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8286231830574911903ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
