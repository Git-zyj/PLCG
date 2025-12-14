#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-103;
long long int var_6 = 7673174408494884838LL;
unsigned long long int var_7 = 8634914674097552704ULL;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
signed char var_12 = (signed char)63;
signed char var_13 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
