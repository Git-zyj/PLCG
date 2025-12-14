#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)67;
short var_1 = (short)-27636;
unsigned char var_4 = (unsigned char)3;
unsigned int var_9 = 3221065002U;
long long int var_11 = -7909228442564427393LL;
short var_13 = (short)-15644;
int zero = 0;
int var_14 = -732314210;
unsigned long long int var_15 = 12030143405740778808ULL;
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
