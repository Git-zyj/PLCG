#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 1158430320598713133ULL;
unsigned long long int var_11 = 2551471305479326363ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-65;
int zero = 0;
short var_14 = (short)8594;
unsigned char var_15 = (unsigned char)217;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
