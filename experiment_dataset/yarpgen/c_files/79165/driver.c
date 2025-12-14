#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)174;
short var_6 = (short)28044;
signed char var_7 = (signed char)41;
unsigned char var_10 = (unsigned char)104;
long long int var_17 = -6837123174578760818LL;
int zero = 0;
unsigned int var_19 = 2991045954U;
long long int var_20 = -4674232189320287908LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
