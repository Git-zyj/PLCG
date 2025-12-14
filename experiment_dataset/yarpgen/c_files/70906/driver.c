#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31568;
unsigned char var_1 = (unsigned char)254;
int var_7 = -1879279201;
unsigned char var_8 = (unsigned char)31;
int zero = 0;
long long int var_12 = -5565997441628569842LL;
long long int var_13 = -3078360389213739764LL;
signed char var_14 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
