#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)50751;
long long int var_16 = -2467647754343284717LL;
int var_19 = -1728259723;
int zero = 0;
unsigned short var_20 = (unsigned short)30843;
signed char var_21 = (signed char)14;
int var_22 = 946407160;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
