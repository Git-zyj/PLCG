#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
long long int var_1 = 1341123810204057033LL;
unsigned long long int var_6 = 8613370413552926066ULL;
unsigned char var_13 = (unsigned char)19;
int zero = 0;
unsigned long long int var_16 = 7342753782036842427ULL;
signed char var_17 = (signed char)43;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
