#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 12140345641098278542ULL;
unsigned long long int var_11 = 2238365059552719362ULL;
unsigned long long int var_17 = 2923579870572371468ULL;
int zero = 0;
unsigned long long int var_19 = 16616078693198451361ULL;
unsigned short var_20 = (unsigned short)18071;
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
