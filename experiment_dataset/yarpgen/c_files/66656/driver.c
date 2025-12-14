#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_10 = 483273273;
long long int var_13 = -1693758261276089821LL;
unsigned char var_17 = (unsigned char)108;
int zero = 0;
unsigned long long int var_19 = 8857422438364946628ULL;
signed char var_20 = (signed char)20;
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
