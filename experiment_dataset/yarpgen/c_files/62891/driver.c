#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13526475373433489418ULL;
unsigned long long int var_5 = 2988044436341772139ULL;
int var_11 = -818996763;
unsigned long long int var_13 = 16472546567771068830ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)131;
long long int var_15 = 6725857728488797103LL;
signed char var_16 = (signed char)-7;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
