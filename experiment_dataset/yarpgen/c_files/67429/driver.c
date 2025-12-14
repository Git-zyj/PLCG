#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)107;
signed char var_8 = (signed char)109;
signed char var_17 = (signed char)-112;
int zero = 0;
long long int var_18 = -4924069499058995317LL;
long long int var_19 = 4397753997784831958LL;
unsigned char var_20 = (unsigned char)227;
int var_21 = 2108401361;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
