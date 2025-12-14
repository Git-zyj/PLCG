#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)24;
signed char var_5 = (signed char)111;
unsigned int var_7 = 3163455386U;
unsigned int var_15 = 298130465U;
int zero = 0;
long long int var_17 = -3601859979094051426LL;
signed char var_18 = (signed char)-6;
void init() {
}

void checksum() {
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
