#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2563753956U;
long long int var_1 = -419736456414081597LL;
unsigned long long int var_3 = 2638106547747689524ULL;
unsigned long long int var_12 = 11767431157817716486ULL;
int zero = 0;
long long int var_16 = 5806532346289297880LL;
long long int var_17 = -3482231875946560782LL;
long long int var_18 = 5053900544084989608LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
