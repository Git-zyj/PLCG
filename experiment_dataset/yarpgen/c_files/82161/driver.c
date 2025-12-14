#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 1580022691894879922LL;
unsigned long long int var_7 = 17266368942920060224ULL;
unsigned char var_8 = (unsigned char)42;
int zero = 0;
unsigned char var_19 = (unsigned char)46;
unsigned char var_20 = (unsigned char)0;
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
