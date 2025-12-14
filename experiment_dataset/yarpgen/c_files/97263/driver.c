#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-33;
unsigned long long int var_3 = 10662045176431487542ULL;
signed char var_8 = (signed char)22;
unsigned long long int var_11 = 606365983482963053ULL;
unsigned long long int var_12 = 9798164876213186988ULL;
unsigned long long int var_18 = 529578056900679964ULL;
int zero = 0;
signed char var_19 = (signed char)33;
signed char var_20 = (signed char)103;
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
