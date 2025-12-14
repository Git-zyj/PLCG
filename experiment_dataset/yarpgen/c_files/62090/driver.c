#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)214;
unsigned char var_3 = (unsigned char)112;
unsigned int var_4 = 2689770034U;
unsigned char var_10 = (unsigned char)235;
int zero = 0;
unsigned int var_18 = 39216333U;
unsigned char var_19 = (unsigned char)39;
unsigned char var_20 = (unsigned char)224;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
