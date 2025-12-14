#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)113;
unsigned long long int var_2 = 18099829381554397540ULL;
unsigned short var_3 = (unsigned short)27116;
unsigned short var_5 = (unsigned short)23618;
unsigned short var_7 = (unsigned short)10378;
unsigned char var_8 = (unsigned char)168;
signed char var_10 = (signed char)-104;
int zero = 0;
unsigned long long int var_12 = 7116242712756442173ULL;
signed char var_13 = (signed char)-33;
long long int var_14 = 6897906014704291542LL;
long long int var_15 = -2697695095573961660LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
