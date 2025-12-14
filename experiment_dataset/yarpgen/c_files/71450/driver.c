#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)230;
unsigned long long int var_10 = 2661320489625093478ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_13 = 6225955495836700882ULL;
unsigned long long int var_14 = 3431849348921627519ULL;
signed char var_15 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
